// roc 2010-06 009a49d0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a49d0
//
// 009a49d0  b9e005c200           mov ecx, 0xc205e0
// 009a49d5  e9e6e7afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a49d0 { void m(); };
extern T_func_009a49d0 G1_func_009a49d0;
void func_009a49d0()
{
    G1_func_009a49d0.m();
}
