// roc 2010-06 009e90b0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e90b0
//
// 009e90b0  b9805dc200           mov ecx, 0xc25d80
// 009e90b5  e98652e1ff           jmp 0x7fe340
// auto-matched from its assembly shape

struct T_func_009e90b0 { void m(); };
extern T_func_009e90b0 G1_func_009e90b0;
void func_009e90b0()
{
    G1_func_009e90b0.m();
}
