// roc 2010-06 009a7410  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a7410
//
// 009a7410  b98026c200           mov ecx, 0xc22680
// 009a7415  e9a6bdafff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a7410 { void m(); };
extern T_func_009a7410 G1_func_009a7410;
void func_009a7410()
{
    G1_func_009a7410.m();
}
