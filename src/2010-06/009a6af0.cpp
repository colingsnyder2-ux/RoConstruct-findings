// roc 2010-06 009a6af0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6af0
//
// 009a6af0  b9c018c200           mov ecx, 0xc218c0
// 009a6af5  e9c6c6afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6af0 { void m(); };
extern T_func_009a6af0 G1_func_009a6af0;
void func_009a6af0()
{
    G1_func_009a6af0.m();
}
