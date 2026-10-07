// roc 2010-06 009e90f0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e90f0
//
// 009e90f0  b9085fc200           mov ecx, 0xc25f08
// 009e90f5  e9d61be9ff           jmp 0x87acd0
// auto-matched from its assembly shape

struct T_func_009e90f0 { void m(); };
extern T_func_009e90f0 G1_func_009e90f0;
void func_009e90f0()
{
    G1_func_009e90f0.m();
}
