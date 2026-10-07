// roc 2010-06 009a6b50  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6b50
//
// 009a6b50  b9fc1cc200           mov ecx, 0xc21cfc
// 009a6b55  e966c6afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6b50 { void m(); };
extern T_func_009a6b50 G1_func_009a6b50;
void func_009a6b50()
{
    G1_func_009a6b50.m();
}
