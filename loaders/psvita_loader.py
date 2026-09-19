import os
import struct
from collections import defaultdict

import ida_bytes
import ida_entry
import ida_funcs
import ida_ida
import ida_idp
import ida_loader
import ida_nalt
import ida_segment
import ida_typeinf
import idaapi
import idc

LOADERS_DIR = os.path.join(idc.idadir(), "loaders/")

def _make_unpacker(tag, size):
    def f(data, off=0):
        return struct.unpack("<{}".format(tag), data[off:off+size])[0]
    return f

u8  = _make_unpacker("B", 1)
u16 = _make_unpacker("H", 2)
u32 = _make_unpacker("I", 4)

def c_str(data):
    return data.split(b"\x00", 1)[0].decode("ascii", errors="replace")

class Ehdr:
    SIZE = 0x34
    MAGIC = b"\x7fELF"

    ET_SCE_EXEC = 0xFE00
    ET_SCE_RELEXEC = 0xFE04

    def __init__(self, data):
        self.e_type      = u16(data, 0x10)
        self.e_entry     = u32(data, 0x18)
        self.e_phoff     = u32(data, 0x1C)
        self.e_phentsize = u16(data, 0x2A)
        self.e_phnum     = u16(data, 0x2C)

class Phdr:
    PT_LOAD = 1

    PF_X = 0x1
    PF_W = 0x2
    PF_R = 0x4

    def __init__(self, data):
        self.p_type   = u32(data, 0x00)
        self.p_offset = u32(data, 0x04)
        self.p_vaddr  = u32(data, 0x08)
        self.p_paddr  = u32(data, 0x0C)
        self.p_filesz = u32(data, 0x10)
        self.p_memsz  = u32(data, 0x14)
        self.p_flags  = u32(data, 0x18)
        self.p_align  = u32(data, 0x1C)

        self.x = bool(self.p_flags & self.PF_X)
        self.w = bool(self.p_flags & self.PF_W)
        self.r = bool(self.p_flags & self.PF_R)

class SceModuleInfo:
    SIZE = 0x5C

    def __init__(self, data):
        self.modname         = c_str(data[0x04:0x04+26])
        self.infoversion     = data[0x1F]
        if self.infoversion != 6:
            raise ValueError(f"Only ELFs built for PS Vita FWs 0.940-3.740.011 are supported, infoversion {self.infoversion}")
        self.ent_top         = u32(data, 0x24)
        self.ent_end         = u32(data, 0x28)
        self.stub_top        = u32(data, 0x2C)
        self.stub_end        = u32(data, 0x30)
        self.dbg_fingerprint = u32(data, 0x34)
        self.start_entry     = u32(data, 0x44)
        self.stop_entry      = u32(data, 0x48)

    @staticmethod
    def _find_or_create_struct():
        name = "sce_module_info_t"
        sid = idc.get_struc_id(name)
        if sid != idc.BADADDR:
            return sid # already exists

        sid = idc.add_struc(-1, name, 0)
        idc.add_struc_member(sid, "modattribute",    -1, idc.FF_WORD, -1, 2)
        idc.add_struc_member(sid, "modversion",      -1, idc.FF_BYTE, -1, 2)
        idc.add_struc_member(sid, "modname",         -1, idc.FF_STRLIT, -1, 26) # MODULE_NAME_MAX_LEN - 1
        idc.add_struc_member(sid, "terminal",        -1, idc.FF_BYTE, -1, 1)    # '\0'
        idc.add_struc_member(sid, "infoversion",     -1, idc.FF_BYTE, -1, 1)
        idc.add_struc_member(sid, "gp_value",        -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "ent_top",         -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "ent_end",         -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "stub_top",        -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "stub_end",        -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "dbg_fingerprint", -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "tls_top",         -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "tls_filesz",      -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "tls_memsz",       -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "start_entry",     -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "stop_entry",      -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "arm_exidx_top",   -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "arm_exidx_end",   -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "arm_extab_top",   -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "arm_extab_end",   -1, idc.FF_DWORD, -1, 4)
        return sid

class SceKernelLibraryEntryTablePrx2Arm:
    SIZE = 0x20

    def __init__(self, data):
        self.structsize  = u8(data, 0x0)
        if self.structsize != self.SIZE:
            raise ValueError(f"Expected PRX2 structsize of {self.SIZE:#x} instead of {self.structsize:#x}")
        self.nfunc       = u16(data, 0x06)
        self.libname_nid = u32(data, 0x10)
        self.libname     = u32(data, 0x14)
        self.libname_str = "unk"
        self.nidtable    = u32(data, 0x18)
        self.addtable    = u32(data, 0x1C)

    @staticmethod
    def _find_or_create_struct():
        name = "sce_kernel_library_entry_table_prx2arm_t"
        sid = idc.get_struc_id(name)
        if sid != idc.BADADDR:
            return sid  # already exists

        sid = idc.add_struc(-1, name, 0)
        idc.add_struc_member(sid, "structsize",  -1, idc.FF_BYTE,  -1, 1)
        idc.add_struc_member(sid, "reserved1",   -1, idc.FF_BYTE,  -1, 1)
        idc.add_struc_member(sid, "version",     -1, idc.FF_WORD,  -1, 2)
        idc.add_struc_member(sid, "attribute",   -1, idc.FF_WORD,  -1, 2)
        idc.add_struc_member(sid, "nfunc",       -1, idc.FF_WORD,  -1, 2)
        idc.add_struc_member(sid, "nvar",        -1, idc.FF_WORD,  -1, 2)
        idc.add_struc_member(sid, "ntlsvar",     -1, idc.FF_WORD,  -1, 2)
        idc.add_struc_member(sid, "hashinfo",    -1, idc.FF_BYTE,  -1, 1)
        idc.add_struc_member(sid, "hashinfotls", -1, idc.FF_BYTE,  -1, 1)
        idc.add_struc_member(sid, "reserved2",   -1, idc.FF_BYTE,  -1, 1)
        idc.add_struc_member(sid, "nidaltsets",  -1, idc.FF_BYTE,  -1, 1)
        idc.add_struc_member(sid, "libname_nid", -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "libname",     -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "nidtable",    -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "addtable",    -1, idc.FF_DWORD, -1, 4)
        return sid

class SceKernelLibraryStubTablePrx2Arm:
    PRX2ARM_SIZE = 0x34      # sceKernelLibraryStubTable_prx2arm
    PRX2ARM_NEW_SIZE = 0x24  # sceKernelLibraryStubTable_prx2arm_new
    SUPPORTED_SIZES = (PRX2ARM_NEW_SIZE, PRX2ARM_SIZE)

    def __init__(self, data):
        self.structsize      = u8(data, 0x00)
        if self.structsize not in self.SUPPORTED_SIZES:
            expected = ", ".join(f"{size:#x}" for size in self.SUPPORTED_SIZES)
            raise ValueError(f"Expected PRX2 import structsize of {expected} instead of {self.structsize:#x}")
        if len(data) < self.structsize:
            raise ValueError(f"Truncated PRX2 import structure: expected {self.structsize:#x} bytes, got {len(data):#x}")
        self.nfunc           = u16(data, 0x06)
        self.libname_str     = "unk"
        if self.structsize == self.PRX2ARM_NEW_SIZE:
            self.libname_nid = u32(data, 0x0C)
            self.libname     = u32(data, 0x10)
            self.nidtable    = u32(data, 0x14) # func_nidtable
            self.addtable    = u32(data, 0x18) # func_table
        else:
            self.libname_nid = u32(data, 0x10)
            self.libname     = u32(data, 0x14)
            self.nidtable    = u32(data, 0x1C) # func_nidtable
            self.addtable    = u32(data, 0x20) # func_table

    def _find_or_create_struct(self):
        if self.structsize == self.PRX2ARM_NEW_SIZE:
            name = "sce_kernel_library_stub_table_prx2arm_new_t"
        else:
            name = "sce_kernel_library_stub_table_prx2arm_t"

        sid = idc.get_struc_id(name)
        if sid != idc.BADADDR:
            return sid  # already exists

        sid = idc.add_struc(-1, name, 0)
        idc.add_struc_member(sid, "structsize",     -1, idc.FF_BYTE,  -1, 1)
        idc.add_struc_member(sid, "reserved1",      -1, idc.FF_BYTE,  -1, 1)
        idc.add_struc_member(sid, "version",        -1, idc.FF_WORD,  -1, 2)
        idc.add_struc_member(sid, "attribute",      -1, idc.FF_WORD,  -1, 2)
        idc.add_struc_member(sid, "nfunc",          -1, idc.FF_WORD,  -1, 2)
        idc.add_struc_member(sid, "nvar",           -1, idc.FF_WORD,  -1, 2)
        idc.add_struc_member(sid, "ntlsvar",        -1, idc.FF_WORD,  -1, 2)

        if self.structsize == self.PRX2ARM_NEW_SIZE:
            idc.add_struc_member(sid, "libname_nid",   -1, idc.FF_DWORD, -1, 4)
            idc.add_struc_member(sid, "libname",       -1, idc.FF_DWORD, -1, 4)
            idc.add_struc_member(sid, "func_nidtable", -1, idc.FF_DWORD, -1, 4)
            idc.add_struc_member(sid, "func_table",    -1, idc.FF_DWORD, -1, 4)
            idc.add_struc_member(sid, "var_nidtable",  -1, idc.FF_DWORD, -1, 4)
            idc.add_struc_member(sid, "var_table",     -1, idc.FF_DWORD, -1, 4)
            return sid

        idc.add_struc_member(sid, "reserved2",      -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "libname_nid",    -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "libname",        -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "sce_sdk_version",-1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "func_nidtable",  -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "func_table",     -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "var_nidtable",   -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "var_table",      -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "tls_nidtable",   -1, idc.FF_DWORD, -1, 4)
        idc.add_struc_member(sid, "tls_table",      -1, idc.FF_DWORD, -1, 4)
        return sid

def make_func(func, name=None):
    t = func & 1
    ea = func & ~1

    idc.split_sreg_range(ea, "T", t, idc.SR_user)
    ida_funcs.add_func(ea)

    if name:
        idc.set_name(ea, name, idc.SN_CHECK)

def apply_struct(ea, size, tid):
    return ida_bytes.create_struct(ea, size, tid)

class VitaElf:
    def __init__(self, fd):
        self.fd = fd
        self.nid_to_name = dict()
        self.proto = []
        self.comments = defaultdict(list)

    def load_nids(self):
        db_file = os.path.join(LOADERS_DIR, "psvita_db.yml")
        try:
            with open(db_file, "r") as f:
                data = f.read().split("\n")
        except IOError:
            raise Exception("Could not open " + db_file)

        for line in data:
            if "0x" in line and "nid: " not in line:
                name, nid = line.strip().split(":")
                name = name.strip()
                nid = int(nid.strip(), 16)
                self.nid_to_name[nid] = name

    def import_types(self):
        ida_typeinf.idc_parse_types(os.path.join(LOADERS_DIR, "psvita_types.h"), ida_typeinf.PT_FILE)

    def load_proto(self):
        fns_file = os.path.join(LOADERS_DIR, "psvita_functions.h")
        try:
            with open(fns_file, "r") as f:
                self.proto = f.read().split("\n")
        except IOError:
            raise Exception("Could not open " + fns_file)

    def load_segments(self):
        self.fd.seek(0)
        header = Ehdr(self.fd.read(Ehdr.SIZE))

        self.fd.seek(header.e_phoff)
        phdrs = [Phdr(self.fd.read(header.e_phentsize)) for _ in range(header.e_phnum)]
        phdr_text = phdrs[0]

        for phdr in phdrs:
            if phdr.p_type == Phdr.PT_LOAD:
                seg = ida_segment.segment_t()
                seg.start_ea = phdr.p_vaddr
                seg.end_ea = phdr.p_vaddr + phdr.p_memsz
                seg.bitness = 1 # 0=16-bit, 1=32-bit, 2=64-bit

                seg.perm = 0
                if phdr.r:
                    seg.perm |= idaapi.SEGPERM_READ
                if phdr.w:
                    seg.perm |= idaapi.SEGPERM_WRITE
                if phdr.x:
                    seg.perm |= idaapi.SEGPERM_EXEC
                    phdr_text = phdr

                ida_segment.add_segm_ex(seg, ".text" if phdr.x else ".data", "CODE" if phdr.x else "DATA", ida_segment.ADDSEG_OR_DIE)
                self.fd.file2base(phdr.p_offset, phdr.p_vaddr, phdr.p_vaddr + phdr.p_filesz, 1)

        if header.e_type == Ehdr.ET_SCE_EXEC:
            self.phdr_modinfo = phdr_text
            modinfo_off = phdr_text.p_offset + header.e_entry
        else:
            self.phdr_modinfo = phdrs[(header.e_entry & (0b11 << 30)) >> 30]
            modinfo_off = self.phdr_modinfo.p_offset + (header.e_entry & 0x3FFFFFFF)

        self.fd.seek(modinfo_off)
        modinfo = SceModuleInfo(self.fd.read(SceModuleInfo.SIZE))
        modinfo_ea = ida_loader.get_fileregion_ea(modinfo_off)
        tid = SceModuleInfo._find_or_create_struct()
        if tid != idc.BADADDR:
            apply_struct(modinfo_ea, SceModuleInfo.SIZE, tid)

        print("")
        print("   Module:      " + str(modinfo.modname))
        print("   Fingerprint: 0x{:08X}".format(modinfo.dbg_fingerprint))
        print("   Entrypoints:")
        if modinfo.start_entry != 0xFFFFFFFF:
            print("     start:     0x{:08X}".format(ida_loader.get_fileregion_ea(self.phdr_modinfo.p_offset + modinfo.start_entry)))
        if modinfo.stop_entry != 0xFFFFFFFF:
            print("     stop:      0x{:08X}".format(ida_loader.get_fileregion_ea(self.phdr_modinfo.p_offset + modinfo.stop_entry)))
        print("")
        return modinfo

    def add_nid_cmt(self, ea, cmt):
        func = ida_funcs.get_func(ea & ~1)
        if func is None:
            return

        name = idc.get_func_name(func.start_ea)
        self.comments[name].append(cmt)
        ida_funcs.set_func_cmt(func, " aka ".join(self.comments[name]), False)

    def parse_impexp(self, top, end, cls, callback):
        arr = []
        cur = top
        while cur < end:
            impexp_foffset = self.phdr_modinfo.p_offset + cur
            impexp_addr = ida_loader.get_fileregion_ea(impexp_foffset)

            self.fd.seek(impexp_foffset)
            size_data = self.fd.read(1)
            if len(size_data) != 1:
                raise ValueError(f"Truncated import/export table at file offset {impexp_foffset:#x}")

            structsize = u8(size_data)
            remaining = end - cur
            if structsize == 0 or structsize > remaining:
                raise ValueError(f"Invalid import/export structsize {structsize:#x} with {remaining:#x} bytes remaining")

            self.fd.seek(impexp_foffset)
            data = self.fd.read(structsize)
            if len(data) != structsize:
                raise ValueError(f"Truncated import/export structure: expected {structsize:#x} bytes, got {len(data):#x}")

            impexp = cls(data)

            if impexp.libname:
                libname_foffset = self.phdr_modinfo.p_offset + impexp.libname - self.phdr_modinfo.p_vaddr
                self.fd.seek(libname_foffset)

                ida_bytes.create_strlit(
                    ida_loader.get_fileregion_ea(libname_foffset),
                    idc.BADADDR,
                    ida_nalt.STRTYPE_C,
                )

                data = self.fd.read(256)
                impexp.libname_str = c_str(data)

            tid = impexp._find_or_create_struct()
            if tid != idc.BADADDR:
                apply_struct(impexp_addr, impexp.structsize, tid)

            arr.append(impexp)
            cur += impexp.structsize

        for impexp in arr:
            for x in range(impexp.nfunc):
                self.fd.seek(self.phdr_modinfo.p_offset + impexp.nidtable - self.phdr_modinfo.p_vaddr + x * 4)
                nid = u32(self.fd.read(4))
                self.fd.seek(self.phdr_modinfo.p_offset + impexp.addtable - self.phdr_modinfo.p_vaddr + x * 4)
                func = u32(self.fd.read(4))

                callback(impexp, func, nid)

    def func_get_name(self, prefix, libname, nid):
        if nid in self.nid_to_name:
            return "{}.{}.{}".format(prefix, libname, self.nid_to_name[nid])

        return "{}.{}.0x{:08X}".format(prefix, libname, nid)

    def apply_proto(self, func, nid):
        if nid not in self.nid_to_name:
            return

        name = self.nid_to_name[nid]
        func &= ~1

        for p in self.proto:
            pos = p.find(name)
            if pos == -1:
                continue
            if pos > 0 and p[pos - 1] not in (" ", "*"):
                continue

            end = pos + len(name)
            if end < len(p) and p[end] not in (" ", "("):
                continue

            tif = ida_typeinf.tinfo_t()
            parsed = ida_typeinf.parse_decl(tif, None, p, ida_typeinf.PT_SIL)
            if parsed is not None:
                ida_typeinf.apply_tinfo(func, tif, ida_typeinf.TINFO_DEFINITE)
            break

    def cb_exp(self, exp, func, nid):
        name = self.func_get_name("exp", exp.libname_str, nid)

        make_func(func, name)
        self.apply_proto(func, nid)
        self.add_nid_cmt(func, "[Export LIB: 0x{:08X} ({}), NID: 0x{:08X}]".format(exp.libname_nid, exp.libname_str, nid))

    def cb_imp(self, imp, func, nid):
        name = self.func_get_name("imp", imp.libname_str, nid)

        make_func(func, name)
        idc.set_func_flags(func, idc.get_func_flags(func) | idaapi.FUNC_THUNK | idaapi.FUNC_LIB)
        self.apply_proto(func, nid)
        self.add_nid_cmt(func, "[Import LIB: 0x{:08X} ({}), NID: 0x{:08X}]".format(imp.libname_nid, imp.libname_str, nid))

    def go(self):
        print("0) Building cache...")
        self.load_nids()

        ida_ida.inf_set_app_bitness(32)
        idaapi.set_processor_type("ARM", ida_idp.SETPROC_LOADER)

        cinfo = idaapi.compiler_info_t()
        cinfo.id = idaapi.COMP_GNU
        cinfo.cm = ida_typeinf.CM_N32_F48
        cinfo.size_b = 1
        cinfo.size_s = 2
        cinfo.size_i = 4
        cinfo.size_e = 4
        cinfo.size_l = 4
        cinfo.size_ll = 8
        cinfo.size_ldbl = 8
        cinfo.defalign = 4
        idaapi.set_compiler(cinfo, 0)

        self.import_types()
        self.load_proto()

        print("1) Loading ELF segments")
        modinfo = self.load_segments()

        print("2) Parsing export tables")
        self.parse_impexp(modinfo.ent_top, modinfo.ent_end, SceKernelLibraryEntryTablePrx2Arm, self.cb_exp)

        print("3) Parsing import tables")
        self.parse_impexp(modinfo.stub_top, modinfo.stub_end, SceKernelLibraryStubTablePrx2Arm, self.cb_imp)

        print("4) Marking entrypoints")
        if modinfo.start_entry != 0xFFFFFFFF:
            ea = ida_loader.get_fileregion_ea(self.phdr_modinfo.p_offset + modinfo.start_entry)
            ida_entry.add_entry(ea, ea, idc.get_func_name(ea), 1)

        if modinfo.stop_entry != 0xFFFFFFFF:
            ea = ida_loader.get_fileregion_ea(self.phdr_modinfo.p_offset + modinfo.stop_entry)
            ida_entry.add_entry(ea, ea, idc.get_func_name(ea), 1)

def load_file(fd, neflags, format):
    e = VitaElf(fd)
    e.go()
    return 1

def accept_file(fd, fname):
    fd.seek(0)
    header = fd.read(Ehdr.SIZE)
    if header.startswith(Ehdr.MAGIC):
        e_type = Ehdr(header).e_type
        if e_type == Ehdr.ET_SCE_EXEC:
            return {"format": "PS Vita ELF", "processor": "arm"}
        elif e_type == Ehdr.ET_SCE_RELEXEC:
            return {"format": "PS Vita Relocatable ELF", "processor": "arm"}

    return 0
