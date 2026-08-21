import math
import struct

import ida_bytes
import ida_funcs
import ida_segment
import ida_ua
import idaapi
import idautils
import idc

def annotate_movw_movt_pairs():
    SEARCH_INSNS = 10

    def decode(ea):
        insn = ida_ua.insn_t()
        return insn if ida_ua.decode_insn(insn, ea) else None

    def is_insn_mnem(insn, mnem):
        return (idc.print_insn_mnem(insn.ea) or "").lower() == mnem

    def get_reg_imm16(insn):
        if insn.ops[0].type != ida_ua.o_reg or insn.ops[1].type != ida_ua.o_imm:
            return None, None
        return insn.ops[0].reg, insn.ops[1].value & 0xFFFF

    def get_reg_imm32(insn):
        if insn.ops[0].type != ida_ua.o_reg or insn.ops[1].type != ida_ua.o_imm:
            return None, None
        return insn.ops[0].reg, insn.ops[1].value & 0xFFFFFFFF

    def as_i32(u32):
        u32 &= 0xFFFFFFFF
        return u32 if u32 < 0x80000000 else u32 - 0x100000000

    def as_float(u32):
        try:
            f = struct.unpack("<f", struct.pack("<I", u32 & 0xFFFFFFFF))[0]
            if math.isnan(f) or math.isinf(f):
                return None
            return repr(f)
        except Exception:
            return None

    def annotate_ea(ea, full_imm):
        seg = ida_segment.getseg(full_imm)
        if seg and seg.start_ea <= full_imm < seg.end_ea:
            return

        cmt = f"[annotate_movw_movt_pairs.py] 0x{full_imm:08X} | int32: {as_i32(full_imm)}"
        f = as_float(full_imm)
        if f is not None:
            cmt += f" | float: {f}"

        original_cmt = ida_bytes.get_cmt(ea, False)
        if original_cmt is None or cmt not in original_cmt:
            ida_bytes.append_cmt(ea, cmt, False)

    def find_next_movw_movt(start_ea, reg, func_end):
        cur = start_ea
        seen = 0

        while seen < SEARCH_INSNS:
            cur = idc.next_head(cur, func_end)

            if cur == idc.BADADDR or cur >= func_end:
                return None

            if not ida_bytes.is_code(ida_bytes.get_flags(cur)):
                continue

            insn = decode(cur)
            if not insn:
                continue

            if is_insn_mnem(insn, "movw") or is_insn_mnem(insn, "movt"):
                r2, imm2 = get_reg_imm16(insn)
                if r2 == reg:
                    return cur, insn, imm2

            seen += 1

        return None

    processed = 0

    for fva in idautils.Functions():
        fn = ida_funcs.get_func(fva)
        if not fn:
            continue

        ea = fn.start_ea

        while ea != idc.BADADDR and ea < fn.end_ea:
            if ida_bytes.is_code(ida_bytes.get_flags(ea)):
                insn = decode(ea)

                if insn:
                    # MOVS macro
                    if is_insn_mnem(insn, "movs") and insn.size == 8 and (insn.flags & ida_ua.INSN_MACRO):
                        reg, full_imm = get_reg_imm32(insn)

                        if reg is not None:
                            annotate_ea(ea, full_imm)
                            processed += 1

                    # Normal/unmerged MOVW + MOVT.
                    elif is_insn_mnem(insn, "movw") or is_insn_mnem(insn, "movt"):
                        reg, imm = get_reg_imm16(insn)

                        if reg is not None:
                            result = find_next_movw_movt(ea, reg, fn.end_ea)

                            if result:
                                ea2, insn2, imm2 = result

                                if is_insn_mnem(insn, "movw") and is_insn_mnem(insn2, "movt"):
                                    full_imm = (imm2 << 16) | imm
                                elif is_insn_mnem(insn, "movt") and is_insn_mnem(insn2, "movw"):
                                    full_imm = (imm << 16) | imm2
                                else:
                                    ea = idc.next_head(ea, fn.end_ea)
                                    continue

                                annotate_ea(ea, full_imm)
                                annotate_ea(ea2, full_imm)
                                processed += 1

            ea = idc.next_head(ea, fn.end_ea)

    return processed

class AnnotatePlugin(idaapi.plugin_t):
    flags = idaapi.PLUGIN_UNL
    comment = "Run annotation script"
    help = "The plugin annotates MOVW/MOVT pairs by adding comments with the reconstructed imm value"
    wanted_name = "Annotate MOVW/MOVT pairs"
    wanted_hotkey = ""

    def init(self):
        return idaapi.PLUGIN_OK

    def run(self, arg):
        annotate_movw_movt_pairs()

    def term(self):
        pass

def PLUGIN_ENTRY():
    return AnnotatePlugin()
