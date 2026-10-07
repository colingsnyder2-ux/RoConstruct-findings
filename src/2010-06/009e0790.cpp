// roc 2010-06 009e0790  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0790
//
// 009e0790  b99030c100           mov ecx, 0xc13090
// 009e0795  e9e69da2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0790 { void m(); };
extern T_func_009e0790 G1_func_009e0790;
void func_009e0790()
{
    G1_func_009e0790.m();
}
