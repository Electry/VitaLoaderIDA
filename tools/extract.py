import subprocess
import os
import yaml
import re

VITASDK_DIR    = "/usr/local/vitasdk"
DB_YML         = "db.yml"
OUT_FNS_FILE   = "vita_functions.h"
OUT_TYPES_FILE = "vita_types.h"

def run_preprocessor():    
    try:
        r = subprocess.run([
            "arm-vita-eabi-gcc",
            "-P",
            "-E",
            "-D__attribute__(x)=",
            "-D__restrict__=",
            "-Drestrict=",
            VITASDK_DIR + "/arm-vita-eabi/include/vitasdk.h",
            VITASDK_DIR + "/arm-vita-eabi/include/string.h",
            VITASDK_DIR + "/arm-vita-eabi/include/stdlib.h",
            VITASDK_DIR + "/arm-vita-eabi/include/stdio.h",
            VITASDK_DIR + "/arm-vita-eabi/include/ctype.h"
        ], stdout=subprocess.PIPE)
    except FileNotFoundError:
        print("ERROR: arm-vita-eabi-gcc not in PATH!")
        return None

    return r.stdout.decode("ascii")

def read_db():
    db = None
    with open(DB_YML, "r") as f:
        db = yaml.load(f)
    return db

def lookup_fn(headers, fname):
    proto = ""
    is_multiline = False

    for line in headers.split("\n"):
        if not is_multiline:
            # search function name in headers
            pos = line.find(fname)
            if pos == -1:
                continue

            if line[pos - 1] != ' ' and line[pos - 1] != '*':
                continue

            pos += len(fname)
            while pos < len(line) and (line[pos] == ' ' or line[pos] == '\t'):
                pos += 1

            if line[pos] != "(":
                continue

            if "typedef" in line:
                continue

        proto += line

        if ";" not in line:
            is_multiline = True
            continue

        # done
        break

    proto = proto.replace("* ", "*")
    proto = proto.replace(" (", "(")
    proto = ' '.join(proto.strip().split())
    return proto

def extract_proto(headers, db):
    counter = 0
    total_fns = 0
    out_file = open(OUT_FNS_FILE, "w")

    for mname, module in db["modules"].items():
        for lname, lib in module["libraries"].items():
            if lib["kernel"]:
                continue

            for fname, nid in lib["functions"].items():
                total_fns += 1
                proto = lookup_fn(headers, fname)
                if proto != "":
                    out_file.write(proto + "\n")
                    counter += 1

    out_file.close()
    return (counter, total_fns)

def extract_types(headers):
    headers_len = len(headers)
    out_file = open(OUT_TYPES_FILE, "w")
    
    for r in re.finditer("typedef", headers):
        is_inner = 0
        begin = r.start()
        pos = begin
        
        while pos < headers_len:
            if headers[pos] == '{':
                is_inner += 1
            elif headers[pos] == '}':
                is_inner -= 1
            elif headers[pos] == ';' and is_inner == 0:
                out_file.write(headers[begin : pos + 1] + "\n")
                break
            pos += 1

    out_file.close()

def go():
    print("1) Merging headers")
    headers = run_preprocessor()

    print("2) Parsing db.yml")
    db = read_db()

    print("3) Looking up prototypes")
    counter, total_fns = extract_proto(headers, db)

    print("   Found {} prototypes out of {}".format(counter, total_fns))
    print("   Saved to " + OUT_FNS_FILE)

    print("4) Extracting types")
    extract_types(headers)
    print("   Saved to " + OUT_TYPES_FILE)

go()
