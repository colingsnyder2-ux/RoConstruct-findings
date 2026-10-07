// roc 2010-06 009a6bb0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6bb0
//
// 009a6bb0  b9bc1cc200           mov ecx, 0xc21cbc
// 009a6bb5  e906c6afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6bb0 { void m(); };
extern T_func_009a6bb0 G1_func_009a6bb0;
void func_009a6bb0()
{
    G1_func_009a6bb0.m();
}
