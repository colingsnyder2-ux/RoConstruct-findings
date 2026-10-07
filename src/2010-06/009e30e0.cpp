// roc 2010-06 009e30e0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e30e0
//
// 009e30e0  b9d0a5c100           mov ecx, 0xc1a5d0
// 009e30e5  e99674a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e30e0 { void m(); };
extern T_func_009e30e0 G1_func_009e30e0;
void func_009e30e0()
{
    G1_func_009e30e0.m();
}
