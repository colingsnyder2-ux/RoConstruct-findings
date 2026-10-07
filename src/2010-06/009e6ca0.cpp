// roc 2010-06 009e6ca0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6ca0
//
// 009e6ca0  b9d800c200           mov ecx, 0xc200d8
// 009e6ca5  e9c6f8baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e6ca0 { void m(); };
extern T_func_009e6ca0 G1_func_009e6ca0;
void func_009e6ca0()
{
    G1_func_009e6ca0.m();
}
