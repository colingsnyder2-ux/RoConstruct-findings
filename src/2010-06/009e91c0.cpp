// roc 2010-06 009e91c0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e91c0
//
// 009e91c0  b90c67c200           mov ecx, 0xc2670c
// 009e91c5  e9f6e7ebff           jmp 0x8a79c0
// auto-matched from its assembly shape

struct T_func_009e91c0 { void m(); };
extern T_func_009e91c0 G1_func_009e91c0;
void func_009e91c0()
{
    G1_func_009e91c0.m();
}
