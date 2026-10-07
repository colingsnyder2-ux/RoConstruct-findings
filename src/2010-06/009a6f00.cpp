// roc 2010-06 009a6f00  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6f00
//
// 009a6f00  b9d020c200           mov ecx, 0xc220d0
// 009a6f05  e9b6c2afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6f00 { void m(); };
extern T_func_009a6f00 G1_func_009a6f00;
void func_009a6f00()
{
    G1_func_009a6f00.m();
}
