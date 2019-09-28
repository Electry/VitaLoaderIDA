import os
import struct
from collections import defaultdict

import idaapi
import idc

def _make_unpacker(tag, size):
    def f(data, off=0):
        return struct.unpack("<{}".format(tag), data[off:off+size])[0]
    return f

u8  = _make_unpacker("B", 1)
u16 = _make_unpacker("H", 2)
u32 = _make_unpacker("I", 4)

def c_str(data):
    return data[:data.find("\x00")]

class Ehdr:
    SIZE = 0x34

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

    def __init__(self, data):
        self.p_type =   u32(data, 0)
        self.p_offset = u32(data, 0x4)
        self.p_vaddr =  u32(data, 0x8)
        self.p_paddr =  u32(data, 0xC)
        self.p_filesz = u32(data, 0x10)
        self.p_memsz =  u32(data, 0x14)
        self.p_flags =  u32(data, 0x18)
        self.x = bool(self.p_flags & 1)

class SceModuleInfo:
    SIZE = 0x34

    def __init__(self, data):
        self.name = struct.unpack_from(str(data[0x4:].find(b"\x00")) + "s", data, 0x4)[0].decode("ascii")
        self.export_top = u32(data, 0x24)
        self.export_end = u32(data, 0x28)
        self.import_top = u32(data, 0x2C)
        self.import_end = u32(data, 0x30)

class SceModuleExports:
    SIZE = 0x20

    def __init__(self, data):
        self.size = u8(data, 0)
        assert(self.size == 0x20)
        self.num_syms_funcs   = u16(data, 6)
        self.library_nid      = u32(data, 16)
        self.library_name_ptr = u32(data, 20)
        self.library_name     = "unk"
        self.nid_table        = u32(data, 24)
        self.entry_table      = u32(data, 28)

class SceModuleImports:
    SIZE = 0x34

    def __init__(self, data):
        self.size = u16(data, 0)
        assert(self.size == 0x34)
        self.num_syms_funcs   = u16(data, 6)
        self.library_nid      = u32(data, 16)
        self.library_name_ptr = u32(data, 20)
        self.library_name     = "unk"
        self.nid_table        = u32(data, 28)
        self.entry_table      = u32(data, 32)


def make_func(func, name):
    t_reg = func & 1  # 0 = ARM, 1 = THUMB
    func -= t_reg
    for i in range(4):
        idc.SetReg(func + i, "T", t_reg)
    idc.MakeFunction(func)
    if name:
        idc.MakeName(func, name)


def add_xrefs():
    """
        Searches for MOV / MOVT pair, probably separated by few instructions,
        and adds xrefs to things that look like addresses
    """
    addr = 0
    while addr != idc.BADADDR:
        addr = idc.NextHead(addr)
        if idc.GetMnem(addr) in ["MOV", "MOVW"]:
            reg = idc.GetOpnd(addr, 0)
            if idc.GetOpnd(addr, 1)[0] != "#":
                continue
            val = idc.GetOperandValue(addr, 1)
            found = False
            next_addr = addr
            for x in range(16):
                next_addr = idc.NextHead(next_addr)
                if idc.GetMnem(next_addr) in ["B", "BX"]:
                    break
                # TODO: we could handle a lot more situations if we follow branches, but it's getting complicated
                # if there's a function call and our register is scratch, it will probably get corrupted, bail out
                if idc.GetMnem(next_addr) in ["BL", "BLX"] and reg in ["R0", "R1", "R2", "R3"]:
                    break
                # if we see a MOVT, do the match!
                if idc.GetMnem(next_addr) in ["MOVT", "MOVT.W"] and idc.GetOpnd(next_addr, 0) == reg:
                    if idc.GetOpnd(next_addr, 1)[0] == "#":
                        found = True
                        val += idc.GetOperandValue(next_addr, 1) * (2 ** 16)
                    break
                # if we see something other than MOVT doing something to the register, bail out
                if idc.GetOpnd(next_addr, 0) == reg or idc.GetOpnd(next_addr, 1) == reg:
                    break
            if val & 0xFFFF0000 == 0:
                continue
            if found:
                # pair of MOV/MOVT
                idc.OpOffEx(next_addr, 1, idc.REF_HIGH16, val, 0, 0)
            else:
                # a single MOV instruction
                idc.OpOff(addr, 1, 0)


class VitaElf:
    def __init__(self, fin):
        self.fin = fin
        self.nid_to_name = dict()

        self.seg0_off = None
        self.seg0_va = None

        self.comments = defaultdict(list)

    def load_nids(self):    
        if os.path.isfile("db.yml"):
            db_file = "db.yml"
        else:
            db_file = idaapi.idadir("loaders") + os.sep + "db.yml"

        try:        
            with open(db_file, "r") as fin:
                data = fin.read().split("\n")
        except IOError:
            raise Exception("Could not open " + db_file)

        for line in data:
            if "0x" in line and "nid: " not in line:
                name, nid = line.strip().split(":")
                name = name.strip()
                nid = int(nid.strip(), 16)
                self.nid_to_name[nid] = name

    def add_nid_cmt(self, ea, cmt):
        func = idaapi.get_func(ea & ~1)
        self.comments[func].append(cmt)
        idaapi.set_func_cmt(func, " aka ".join(self.comments[func]), 0)

    def parse_impexp(self, top, end, cls, callback):
        arr = []
        cur = top
        while cur < end:
            self.fin.seek(self.phdr_modinfo.p_offset + cur)
            impexp = cls(self.fin.read(cls.SIZE))
            if impexp.library_name_ptr:
                self.fin.seek(self.phdr_modinfo.p_offset + impexp.library_name_ptr - self.phdr_modinfo.p_vaddr)
                data = self.fin.read(256)
                impexp.library_name = c_str(data)

            arr.append(impexp)
            cur += impexp.size

        for impexp in arr:
            for x in xrange(impexp.num_syms_funcs):
                self.fin.seek(self.phdr_modinfo.p_offset + impexp.nid_table - self.phdr_modinfo.p_vaddr + x * 4)
                nid = u32(self.fin.read(4))
                self.fin.seek(self.phdr_modinfo.p_offset + impexp.entry_table - self.phdr_modinfo.p_vaddr + x * 4)
                func = u32(self.fin.read(4))

                callback(impexp, func, nid)

    def func_get_name(self, prefix, libname, nid):
        if nid in self.nid_to_name:
            suffix = self.nid_to_name[nid]
        else:
            suffix = "0x{:08X}".format(nid)
        return "{}.{}.{}".format(prefix, libname, suffix)

    def cb_exp(self, exp, func, nid):
        name = self.func_get_name("exp", exp.library_name, nid)

        make_func(func, name)

        self.add_nid_cmt(func, "[Export LIB: 0x{:08X} ({}), NID: 0x{:08X}]".format(exp.library_nid, exp.library_name, nid))

    def cb_imp(self, imp, func, nid):
        name = self.func_get_name("imp", imp.library_name, nid)

        make_func(func, name)
        idc.SetFunctionFlags(func, idc.GetFunctionFlags(func) | idaapi.FUNC_THUNK | idaapi.FUNC_LIB)

        self.add_nid_cmt(func, "[Import LIB: 0x{:08X} ({}), NID: 0x{:08X}]".format(imp.library_nid, imp.library_name, nid))

    def go(self):
        print "0) Building NID cache..."
        self.load_nids()

        # Vita is ARM
        idaapi.set_processor_type("arm", idaapi.SETPROC_ALL|idaapi.SETPROC_FATAL)

        print "1) Loading ELF segments"
        self.fin.seek(0)
        header = Ehdr(self.fin.read(Ehdr.SIZE))

        self.fin.seek(header.e_phoff)
        phdrs = [Phdr(self.fin.read(header.e_phentsize)) for _ in xrange(header.e_phnum)]
        phdr_text = phdrs[0]

        for phdr in phdrs:
            if phdr.p_type == Phdr.PT_LOAD:
                idaapi.add_segm(0, phdr.p_vaddr, phdr.p_vaddr + phdr.p_memsz,
                                ".text" if phdr.x else ".data",
                                "CODE" if phdr.x else "DATA")
                seg = idaapi.getseg(phdr.p_vaddr)
                if phdr.x:
                    seg.perm = idaapi.SEGPERM_EXEC | idaapi.SEGPERM_READ
                    phdr_text = phdr
                else:
                    seg.perm = idaapi.SEGPERM_READ | idaapi.SEGPERM_WRITE
                self.fin.file2base(phdr.p_offset, phdr.p_vaddr, phdr.p_vaddr + phdr.p_filesz, 1)

        if header.e_type == Ehdr.ET_SCE_EXEC:
            self.phdr_modinfo = phdr_text
            modinfo_off = phdr_text.p_offset + header.e_entry
        else:
            self.phdr_modinfo = phdrs[(header.e_entry & (0b11 << 30)) >> 30]
            modinfo_off = self.phdr_modinfo.p_offset + (header.e_entry & 0x3FFFFFFF)

        self.fin.seek(modinfo_off)
        modinfo = SceModuleInfo(self.fin.read(SceModuleInfo.SIZE))

        print "2) Parsing export tables"
        self.parse_impexp(modinfo.export_top, modinfo.export_end, SceModuleExports, self.cb_exp)

        print "3) Parsing import tables"
        self.parse_impexp(modinfo.import_top, modinfo.import_end, SceModuleImports, self.cb_imp)

        print "4) Waiting for IDA to analyze the program"
        idc.Wait()

        print "5) Analyzing system instructions"
        from highlight_arm_system_insn import run_script
        run_script()

        print "6) Adding MOVT/MOVW pair xrefs"
        add_xrefs()


def load_file(fin, neflags, format):
    e = VitaElf(fin)
    e.go()

    return 1

def accept_file(fin, n):
    if n:
        return 0

    fin.seek(0)
    header = fin.read(Ehdr.SIZE)

    if header.startswith("\x7fELF"):
        e_type = u16(header, 0x10)
        if e_type == Ehdr.ET_SCE_EXEC:
            return "PS Vita ELF"
        elif e_type == Ehdr.ET_SCE_RELEXEC:
            return "PS Vita Relocatable ELF"

    return 0
