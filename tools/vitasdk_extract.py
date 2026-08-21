from datetime import datetime
from pathlib import Path
import os
import re
import subprocess
import tempfile
import yaml

VITASDK_DIR = "/usr/local/vitasdk"

OUT_DIR         = os.path.join(os.path.dirname(__file__), "../loaders/")
OUT_FNS_FILE    = os.path.abspath(os.path.join(OUT_DIR, "psvita_functions.h"))
OUT_TYPES_FILE  = os.path.abspath(os.path.join(OUT_DIR, "psvita_types.h"))
OUT_DB_YML_FILE = os.path.abspath(os.path.join(OUT_DIR, "psvita_db.yml"))

INCLUDE_DIR = os.path.abspath(os.path.join(VITASDK_DIR, "arm-vita-eabi/include"))
DB_YML_DIR  = os.path.abspath(os.path.join(VITASDK_DIR, "share/vita-headers/db/360"))

WRAPPER_HEADER = r"""
#define __attribute__(x)
#define __restrict__
#define __extension__
#define __inline__ inline
#define __asm__(x)
#define __volatile__ volatile

#include <vitasdk.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
"""

EXTRA_FN_PROTOS = r"""
int module_start(SceSize arglen, const void *argp);
int module_stop(SceSize arglen, const void *argp);
int module_exit(SceSize arglen, const void *argp);
int module_bootstart(SceSize arglen, const void *argp);
int module_suspend(void);
SceInt32 module_proc_create(ScePID pid, void* pParam, void* pCommon);
SceInt32 module_proc_exit(ScePID pid, void* pParam, void* pCommon);
SceInt32 module_proc_kill(ScePID pid, void* pParam, void* pCommon);
"""

EXTRA_SYSLIB_MODULE = {
    "nid": 0x00000000,
    "libraries": {
        "syslib": {
            "kernel": False,
            "nid": 0x00000000,
            "functions": {
                "module_start":       0x935CD196,
                "module_stop":        0x79F8E492,
                "module_exit":        0x913482A9,
                "module_bootstart":   0x5C424D40,
                "module_suspend":     0xDD42FA37,
                "module_proc_create": 0xE640E30C,
                "module_proc_exit":   0x4F0EE5BD,
                "module_proc_kill":   0xDF0212B9,
            },
        },
    }
}

def run_preprocessor():
    wrapper_tmp = tempfile.NamedTemporaryFile("w", suffix=".h", delete=False, encoding="utf-8")
    wrapper_tmp.write(WRAPPER_HEADER.strip())
    wrapper_tmp.write("\n\n")
    wrapper_tmp.close()
    wrapper_path = wrapper_tmp.name

    try:
        result = subprocess.run(
            [
                "arm-vita-eabi-gcc",
                "-E",
                "-P",
                "-x", "c",
                "-I", INCLUDE_DIR,
                wrapper_path,
            ],
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            check=True,
        )
    except FileNotFoundError:
        print("ERROR: arm-vita-eabi-gcc not in PATH!")
        return None
    except subprocess.CalledProcessError as e:
        print("Preprocessor failed:")
        print(e.stderr.decode("utf-8", errors="replace"))
        return None
    finally:
        os.unlink(wrapper_path)

    return result.stdout.decode("utf-8", errors="replace")

def process_db_yml(run_datetime):
    class HexInt(int): pass
    class FwFloat(float): pass
    class DbYamlDumper(yaml.SafeDumper): pass

    DbYamlDumper.add_representer(HexInt, lambda d, v: d.represent_scalar("tag:yaml.org,2002:int", f"0x{int(v):08X}"))
    DbYamlDumper.add_representer(FwFloat, lambda d, v: d.represent_scalar("tag:yaml.org,2002:float", f"{float(v):.2f}"))

    path = Path(DB_YML_DIR)
    merged_modules = {
        "syslib": EXTRA_SYSLIB_MODULE
    }

    for file in sorted(path.glob("*.yml")):
        with file.open("r", encoding="utf-8") as f:
            data = yaml.safe_load(f) or {}

        if data.get("version") != 2:
            raise ValueError(f"{file.name}: expected version 2")

        firmware = str(data.get("firmware"))
        if firmware not in ("3.60", "3.6"):
            raise ValueError(f"{file.name}: expected firmware 3.60, got {firmware}")

        modules = data.get("modules", {})
        if not isinstance(modules, dict):
            raise ValueError(f"{file.name}: 'modules' must be a mapping")

        merged_modules.update(modules)

    for mod in merged_modules.values():
        mod["nid"] = HexInt(mod["nid"])

        for lib in mod.get("libraries", {}).values():
            lib["nid"] = HexInt(lib["nid"])

            for fn_name, fn_nid in lib.get("functions", {}).items():
                lib["functions"][fn_name] = HexInt(fn_nid)

    db = {
        "version": 2,
        "firmware": FwFloat(3.60),
        "modules": merged_modules
    }

    with open(OUT_DB_YML_FILE, "w") as f:
        f.write(f"# Generated on: {run_datetime.isoformat()}\n")
        yaml.dump(db, f, Dumper=DbYamlDumper, sort_keys=False)

    return db

def sanitize_headers(text):
    replacements = [
        (r"\b__extension__\b", ""),
        (r"\b__inline__\b", "inline"),
        (r"\b__restrict__\b", ""),
        (r"\brestrict\b", ""),
        (r"__asm__\s*\([^)]*\)", ""),
        (r"__attribute__\s*\(\([^)]*\)\)", ""),
        (r"__attribute__\s*\([^)]*\)", ""),
        (r"\b__builtin_va_list\b", "void *"),
        (r"typedef\s+__typeof__\s*\(\s*nullptr\s*\)\s+nullptr_t\s*;", "typedef void *nullptr_t;"),
    ]

    for pattern, repl in replacements:
        text = re.sub(pattern, repl, text)

    text = re.sub(r"\n\s*\n+", "\n\n", text)
    return text

def clean_chunk(x):
    x = re.sub(r"\s+", " ", x).strip()
    x = re.sub(r"\s*\(\s*\*", "(*", x)
    x = re.sub(r"\(\s*", "(", x)
    x = re.sub(r"\s*\)", ")", x)
    x = re.sub(r"\s*,\s*", ", ", x)
    x = re.sub(r"\s+;", ";", x)
    x = re.sub(r"\s*;\s*$", ";", x)
    return x

def normalize_decl(s):
    s = s.strip()
    if not s:
        return s

    if "{" not in s and "}" not in s:
        return clean_chunk(" ".join(line.strip() for line in s.splitlines() if line.strip()))

    s = re.sub(r"([{}])", r"\n\1\n", s)
    parts = [x.strip() for x in s.splitlines() if x.strip()]

    out = []
    indent = 0
    i = 0

    while i < len(parts):
        part = parts[i]

        if part == "{":
            if out:
                out[-1] += " {"
            else:
                out.append("{")
            indent += 1
            i += 1
            continue

        if part == "}":
            indent = max(indent - 1, 0)
            text = "}"
            if i + 1 < len(parts) and parts[i + 1] not in ("{", "}"):
                nxt = clean_chunk(parts[i + 1])
                text += nxt if nxt == ";" else " " + nxt
                i += 1
            out.append("  " * indent + text)
            i += 1
            continue

        out.append("  " * indent + clean_chunk(part))
        i += 1

    return "\n".join(out)

def split_declarations(headers):
    decls = []
    buf = []
    brace_depth = 0
    paren_depth = 0

    for line in headers.splitlines():
        s = line.strip()
        if not s:
            continue

        if s.startswith("#"):
            continue

        buf.append(s)

        for ch in s:
            if ch == "{":
                brace_depth += 1
            elif ch == "}":
                brace_depth -= 1
            elif ch == "(":
                paren_depth += 1
            elif ch == ")":
                paren_depth -= 1

        if ";" in s and brace_depth == 0 and paren_depth == 0:
            decls.append("\n".join(buf))
            buf = []

    return decls

def extract_proto(headers, db, run_datetime):
    decls = split_declarations(headers)
    fn_index = {}

    for decl in decls:
        if "typedef" in decl:
            continue
        if "(" not in decl or ")" not in decl or not decl.endswith(";"):
            continue

        m = re.search(r"([A-Za-z_]\w*)\s*\(", decl)
        if not m:
            continue

        name = m.group(1)
        fn_index[name] = normalize_decl(decl)

    found = 0
    total = 0
    seen = set()

    with open(OUT_FNS_FILE, "w", encoding="utf-8") as out_file:
        out_file.write(f"// Generated on: {run_datetime.isoformat()}\n")
        out_file.write(EXTRA_FN_PROTOS.strip())
        out_file.write("\n")

        for _, module in db["modules"].items():
            libraries = module.get("libraries", {})
            for _, lib in libraries.items():
                if lib.get("kernel"):
                    continue

                functions = lib.get("functions", {})
                for fname, _ in functions.items():
                    total += 1
                    proto = fn_index.get(fname, "")
                    if proto and proto not in seen:
                        out_file.write(proto + "\n")
                        seen.add(proto)
                        found += 1

    return found, total

def keep_type_decl(decl):
    if decl.startswith("typedef"):
        return True

    if decl.startswith("struct ") or decl.startswith("union ") or decl.startswith("enum "):
        if "{" in decl and "}" in decl:
            return True

    return False

def extract_types(headers, run_datetime):
    decls = split_declarations(headers)
    seen = set()

    with open(OUT_TYPES_FILE, "w", encoding="utf-8") as out_file:
        out_file.write(f"// Generated on: {run_datetime.isoformat()}\n")

        prev_norm_multiline = False

        for decl in decls:
            if not keep_type_decl(decl):
                continue

            norm = normalize_decl(decl)
            if norm in seen:
                continue

            curr_norm_multiline = "\n" in norm
            seen.add(norm)

            if prev_norm_multiline or curr_norm_multiline:
                out_file.write("\n")

            out_file.write(norm + "\n")
            prev_norm_multiline = curr_norm_multiline

def go():
    run_datetime = datetime.now().astimezone()

    print(f"1) Preprocessing headers from {INCLUDE_DIR}")
    headers = run_preprocessor()
    if headers is None:
        return

    print("2) Sanitizing headers")
    headers = sanitize_headers(headers)

    print(f"3) Processing DB YML from {DB_YML_DIR}")
    db = process_db_yml(run_datetime)
    print(f"   Saved to {OUT_DB_YML_FILE}")

    print("4) Looking up function prototypes")
    found, total = extract_proto(headers, db, run_datetime)
    print(f"   Found {found} prototypes out of {total}")
    print(f"   Saved to {OUT_FNS_FILE}")

    print("5) Extracting types")
    extract_types(headers, run_datetime)
    print(f"   Saved to {OUT_TYPES_FILE}")

if __name__ == "__main__":
    go()
