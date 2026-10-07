// roc 2010-06 009a6ee0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6ee0
//
// 009a6ee0  b95022c200           mov ecx, 0xc22250
// 009a6ee5  e9d6c2afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6ee0 { void m(); };
extern T_func_009a6ee0 G1_func_009a6ee0;
void func_009a6ee0()
{
    G1_func_009a6ee0.m();
}
