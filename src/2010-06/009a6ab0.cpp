// roc 2010-06 009a6ab0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6ab0
//
// 009a6ab0  b98418c200           mov ecx, 0xc21884
// 009a6ab5  e906c7afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6ab0 { void m(); };
extern T_func_009a6ab0 G1_func_009a6ab0;
void func_009a6ab0()
{
    G1_func_009a6ab0.m();
}
