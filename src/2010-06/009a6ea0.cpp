// roc 2010-06 009a6ea0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6ea0
//
// 009a6ea0  b91022c200           mov ecx, 0xc22210
// 009a6ea5  e916c3afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6ea0 { void m(); };
extern T_func_009a6ea0 G1_func_009a6ea0;
void func_009a6ea0()
{
    G1_func_009a6ea0.m();
}
