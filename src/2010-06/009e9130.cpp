// roc 2010-06 009e9130  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9130
//
// 009e9130  b90c62c200           mov ecx, 0xc2620c
// 009e9135  e956b2e3ff           jmp 0x824390
// auto-matched from its assembly shape

struct T_func_009e9130 { void m(); };
extern T_func_009e9130 G1_func_009e9130;
void func_009e9130()
{
    G1_func_009e9130.m();
}
