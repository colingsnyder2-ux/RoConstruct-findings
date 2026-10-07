// roc 2010-06 009a6ec0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6ec0
//
// 009a6ec0  b9e822c200           mov ecx, 0xc222e8
// 009a6ec5  e9f6c2afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6ec0 { void m(); };
extern T_func_009a6ec0 G1_func_009a6ec0;
void func_009a6ec0()
{
    G1_func_009a6ec0.m();
}
