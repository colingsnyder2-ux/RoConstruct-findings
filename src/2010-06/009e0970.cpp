// roc 2010-06 009e0970  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0970
//
// 009e0970  b99012c100           mov ecx, 0xc11290
// 009e0975  e9069ca2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0970 { void m(); };
extern T_func_009e0970 G1_func_009e0970;
void func_009e0970()
{
    G1_func_009e0970.m();
}
