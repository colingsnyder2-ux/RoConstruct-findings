// roc 2010-06 009a6b90  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6b90
//
// 009a6b90  b97c1cc200           mov ecx, 0xc21c7c
// 009a6b95  e926c6afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6b90 { void m(); };
extern T_func_009a6b90 G1_func_009a6b90;
void func_009a6b90()
{
    G1_func_009a6b90.m();
}
