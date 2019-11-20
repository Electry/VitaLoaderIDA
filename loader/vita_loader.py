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
    SIZE = 0x5C

    def __init__(self, data):
        self.name = struct.unpack_from(str(data[0x4:].find(b"\x00")) + "s", data, 0x4)[0].decode("ascii")
        self.export_top = u32(data, 0x24)
        self.export_end = u32(data, 0x28)
        self.import_top = u32(data, 0x2C)
        self.import_end = u32(data, 0x30)
        self.nid = u32(data, 0x34)
    
    @staticmethod
    def _find_or_create_struct():
        name = "sce_module_info_t"
        sid = idc.GetStrucIdByName(name)
        if sid != idc.BADADDR:
            return sid # already exists
 
        sid = idc.AddStrucEx(-1, name, 0)
        idc.AddStrucMember(sid, "modattribute", -1, idc.FF_WORD, -1, 2)
        idc.AddStrucMember(sid, "modversion", -1, idc.FF_WORD, -1, 2)
        idc.AddStrucMember(sid, "modname", -1, idc.FF_ASCI, -1, 27)
        idc.AddStrucMember(sid, "type", -1, idc.FF_BYTE, -1, 1)
        idc.AddStrucMember(sid, "gp_value", -1, idc.FF_DWRD, -1, 4)
        idc.AddStrucMember(sid, "ent_top", -1, idc.FF_DWRD, -1, 4)
        idc.AddStrucMember(sid, "ent_end", -1, idc.FF_DWRD, -1, 4)
        idc.AddStrucMember(sid, "stub_top", -1, idc.FF_DWRD, -1, 4)
        idc.AddStrucMember(sid, "stub_end", -1, idc.FF_DWRD, -1, 4)
        idc.AddStrucMember(sid, "module_nid", -1, idc.FF_DWRD, -1, 4)
        idc.AddStrucMember(sid, "field_38", -1, idc.FF_DWRD, -1, 4)
        idc.AddStrucMember(sid, "field_3C", -1, idc.FF_DWRD, -1, 4)
        idc.AddStrucMember(sid, "field_40", -1, idc.FF_DWRD, -1, 4)
        idc.AddStrucMember(sid, "mod_start", -1, idc.FF_DWRD, -1, 4)
        idc.AddStrucMember(sid, "mod_stop", -1, idc.FF_DWRD, -1, 4)
        idc.AddStrucMember(sid, "exidx_start", -1, idc.FF_DWRD, -1, 4)
        idc.AddStrucMember(sid, "exidx_end", -1, idc.FF_DWRD, -1, 4)
        idc.AddStrucMember(sid, "extab_start", -1, idc.FF_DWRD, -1, 4)
        idc.AddStrucMember(sid, "extab_end", -1, idc.FF_DWRD, -1, 4)

        idc.Til2Idb(-1, name)
        return sid

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

    @staticmethod
    def _find_or_create_struct():
        name = "sce_module_exports_t"
        sid = idc.GetStrucIdByName(name)
        if sid != idc.BADADDR:
            return sid # already exists
 
        sid = idc.AddStrucEx(-1, name, 0)
        idc.AddStrucMember(sid, "size", -1, idc.FF_WORD | idc.FF_DATA, -1, 2)
        idc.AddStrucMember(sid, "lib_version", -1, idc.FF_BYTE | idc.FF_DATA, -1, 2)
        idc.AddStrucMember(sid, "attribute", -1, idc.FF_WORD | idc.FF_DATA, -1, 2)
        idc.AddStrucMember(sid, "num_functions", -1, idc.FF_WORD | idc.FF_DATA, -1, 2)
        idc.AddStrucMember(sid, "num_vars", -1, idc.FF_WORD | idc.FF_DATA, -1, 2)
        idc.AddStrucMember(sid, "unk", -1, idc.FF_WORD | idc.FF_DATA, -1, 2)
        idc.AddStrucMember(sid, "num_tls_vars", -1, idc.FF_DWRD | idc.FF_DATA, -1, 4)
        idc.AddStrucMember(sid, "lib_nid", -1, idc.FF_DWRD | idc.FF_DATA, -1, 4)
        idc.AddStrucMember(sid, "lib_name", -1, idc.FF_DWRD | idc.FF_DATA, -1, 4)
        idc.AddStrucMember(sid, "nid_table", -1, idc.FF_DWRD | idc.FF_DATA, -1, 4)
        idc.AddStrucMember(sid, "entry_table", -1, idc.FF_DWRD | idc.FF_DATA, -1, 4)

        idc.Til2Idb(-1, name)
        return sid

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
       
    @staticmethod
    def _find_or_create_struct():
        name = "sce_module_imports_t"
        sid = idc.GetStrucIdByName(name)
        if sid != idc.BADADDR:
            return sid # already exists
 
        sid = idc.AddStrucEx(-1, name, 0)
        idc.AddStrucMember(sid, "size", -1, idc.FF_WORD | idc.FF_DATA, -1, 2)
        idc.AddStrucMember(sid, "version", -1, idc.FF_WORD | idc.FF_DATA, -1, 2)
        idc.AddStrucMember(sid, "flags", -1, idc.FF_WORD | idc.FF_DATA, -1, 2)
        idc.AddStrucMember(sid, "num_functions", -1, idc.FF_WORD | idc.FF_DATA, -1, 2)
        idc.AddStrucMember(sid, "num_vars", -1, idc.FF_WORD | idc.FF_DATA, -1, 2)
        idc.AddStrucMember(sid, "num_tls_vars", -1, idc.FF_WORD | idc.FF_DATA, -1, 2)
        idc.AddStrucMember(sid, "reserved1", -1, idc.FF_DWRD | idc.FF_DATA, -1, 4)
        idc.AddStrucMember(sid, "lib_nid", -1, idc.FF_DWRD | idc.FF_DATA, -1, 4)
        idc.AddStrucMember(sid, "lib_name", -1, idc.FF_DWRD | idc.FF_DATA, -1, 4)
        idc.AddStrucMember(sid, "reserved2", -1, idc.FF_DWRD | idc.FF_DATA, -1, 4)
        idc.AddStrucMember(sid, "func_nid_table", -1, idc.FF_DWRD | idc.FF_DATA, -1, 4)
        idc.AddStrucMember(sid, "func_entry_table", -1, idc.FF_DWRD | idc.FF_DATA, -1, 4)
        idc.AddStrucMember(sid, "var_nid_table", -1, idc.FF_DWRD | idc.FF_DATA, -1, 4)
        idc.AddStrucMember(sid, "var_entry_table", -1, idc.FF_DWRD | idc.FF_DATA, -1, 4)
        idc.AddStrucMember(sid, "tls_nid_table", -1, idc.FF_DWRD | idc.FF_DATA, -1, 4)
        idc.AddStrucMember(sid, "tls_entry_table", -1, idc.FF_DWRD | idc.FF_DATA, -1, 4)

        idc.Til2Idb(-1, name)
        return sid


def make_func(func, name):
    t_reg = func & 1  # 0 = ARM, 1 = THUMB
    func -= t_reg
    for i in range(4):
        idc.SetReg(func + i, "T", t_reg)
    idc.MakeFunction(func)
    if name:
        idc.MakeName(func, name)

def apply_struct(ea, sid):
    size = idc.GetStrucSize(sid)
    idc.MakeUnknown(ea, size, idc.DOUNK_DELNAMES)
    idaapi.doStruct(ea, size, sid)
    return size

def add_xrefs():
    """
        Searches for MOV / MOVT pair, probably separated by few instructions,
        and adds xrefs to addresses
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

            lower16_addr = addr
            upper16_addr = addr
            for x in range(16):
                upper16_addr = idc.NextHead(upper16_addr)
                if idc.GetMnem(upper16_addr) in ["B", "BX"]:
                    break
                # TODO: we could handle a lot more situations if we follow branches, but it's getting complicated
                # if there's a function call and our register is scratch, it will probably get corrupted, bail out
                if idc.GetMnem(upper16_addr) in ["BL", "BLX"] and reg in ["R0", "R1", "R2", "R3"]:
                    break
                # if we see a MOVT, do the match!
                if idc.GetMnem(upper16_addr) in ["MOVT", "MOVT.W"] and idc.GetOpnd(upper16_addr, 0) == reg:
                    if idc.GetOpnd(upper16_addr, 1)[0] == "#":
                        found = True
                        val += idc.GetOperandValue(upper16_addr, 1) << 16
                    break
                # if we see something other than MOVT doing something to the register, bail out
                if idc.GetOpnd(upper16_addr, 0) == reg or idc.GetOpnd(upper16_addr, 1) == reg:
                    break

            # check if is valid address
            if idaapi.getseg(val) is not None:
                if found:
                    # pair of MOV/MOVT
                    idc.OpOffEx(lower16_addr, 1, idc.REF_LOW16, val, 0, 0)
                    idc.OpOffEx(upper16_addr, 1, idc.REF_HIGH16, val, 0, 0)
                else:
                    # a single MOV instruction
                    idc.OpOff(addr, 1, 0)
            else:
                val_string = hex(val)
                if val != 0:
                    val_string += " (" + str(val)
                    float_repr = struct.unpack("<f", struct.pack("<I", val))[0]
                    if float_repr > 0.00000001:
                        val_string +=  ", " + str(float_repr) + ")"
                    else:
                        val_string += ")"

                if found:
                    # pair of MOV/MOVT
                    idc.MakeComm(lower16_addr, "lower16:" + val_string)
                    idc.MakeComm(upper16_addr, "upper16:" + val_string)
                else:
                    # a single MOV instruction
                    if val != 0:
                        idc.MakeComm(addr, val_string)

class VitaElf:
    def __init__(self, fin):
        self.fin = fin
        self.nid_to_name = dict()
        self.proto = []

        self.comments = defaultdict(list)

    def load_nids(self):    
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

    def import_types(self):
        idaapi.idc_parse_types(idaapi.idadir("loaders") + os.sep + "vita_types.h", idc.PT_FILE)

    def load_proto(self):
        fns_file = idaapi.idadir("loaders") + os.sep + "vita_functions.h"
        try:        
            with open(fns_file, "r") as fin:
                self.proto = fin.read().split("\n")
        except IOError:
            raise Exception("Could not open " + fns_file)

    def add_nid_cmt(self, ea, cmt):
        func = idaapi.get_func(ea & ~1)
        self.comments[func].append(cmt)
        idaapi.set_func_cmt(func, " aka ".join(self.comments[func]), 0)

    def parse_impexp(self, top, end, cls, callback):
        arr = []
        cur = top
        while cur < end:
            impexp_foffset = self.phdr_modinfo.p_offset + cur
            impexp_addr = idaapi.get_fileregion_ea(impexp_foffset)

            self.fin.seek(impexp_foffset)
            impexp = cls(self.fin.read(cls.SIZE))
            if impexp.library_name_ptr:
                library_name_foffset = self.phdr_modinfo.p_offset + impexp.library_name_ptr - self.phdr_modinfo.p_vaddr
                self.fin.seek(library_name_foffset)
                
                # create a library name string
                idc.MakeStr(idaapi.get_fileregion_ea(library_name_foffset), idc.BADADDR)

                data = self.fin.read(256)
                impexp.library_name = c_str(data)

            # apply struct
            apply_struct(impexp_addr, cls._find_or_create_struct())
            #idc.MakeComm(impexp_addr, "{}".format(impexp.library_name))

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
            return "{}.{}.{}".format(prefix, libname, self.nid_to_name[nid])

        return "{}.{}.0x{:08X}".format(prefix, libname, nid)

    def apply_proto(self, func, nid):
        if nid not in self.nid_to_name:
            return
    
        name = self.nid_to_name[nid]
        t_reg = func & 1
        func -= t_reg
        for p in self.proto:
            pos = p.find(name)
            if pos == -1:
                continue                
            if p[pos - 1] != ' ' and p[pos - 1] != '*':
                continue

            idc.SetType(func, p)
            break

    def cb_exp(self, exp, func, nid):
        name = self.func_get_name("exp", exp.library_name, nid)

        make_func(func, name)
        self.apply_proto(func, nid)

        self.add_nid_cmt(func, "[Export LIB: 0x{:08X} ({}), NID: 0x{:08X}]".format(exp.library_nid, exp.library_name, nid))

    def cb_imp(self, imp, func, nid):
        name = self.func_get_name("imp", imp.library_name, nid)

        make_func(func, name)
        idc.SetFunctionFlags(func, idc.GetFunctionFlags(func) | idaapi.FUNC_THUNK | idaapi.FUNC_LIB)
        self.apply_proto(func, nid)

        self.add_nid_cmt(func, "[Import LIB: 0x{:08X} ({}), NID: 0x{:08X}]".format(imp.library_nid, imp.library_name, nid))

    def go(self):
        print "0) Building cache..."
        self.load_nids()

        # Vita is ARM
        idaapi.set_processor_type("arm", idaapi.SETPROC_ALL | idaapi.SETPROC_FATAL)
        
        # Set compiler info
        cinfo = idaapi.compiler_info_t()
        cinfo.id = idaapi.COMP_GNU
        cinfo.cm = idaapi.CM_CC_CDECL | idaapi.CM_N32_F48
        cinfo.size_s = 2
        cinfo.size_i = cinfo.size_b = cinfo.size_e = cinfo.size_l = cinfo.defalign = 4
        cinfo.size_ll = cinfo.size_ldbl = 8
        idaapi.set_compiler(cinfo, 0)

        # Import types
        self.import_types()
        self.load_proto()

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
        modinfo_ea = idaapi.get_fileregion_ea(modinfo_off)
        apply_struct(modinfo_ea, SceModuleInfo._find_or_create_struct())
        
        print ""
        print "   Module:  " + str(modinfo.name)
        print "   NID:     0x{:08X}".format(modinfo.nid)
        print ""

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
