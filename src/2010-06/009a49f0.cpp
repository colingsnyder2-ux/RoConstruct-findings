// roc 2010-06 009a49f0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a49f0
//
// 009a49f0  b94807c200           mov ecx, 0xc20748
// 009a49f5  e9c6e7afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a49f0 { void m(); };
extern T_func_009a49f0 G1_func_009a49f0;
void func_009a49f0()
{
    G1_func_009a49f0.m();
}
