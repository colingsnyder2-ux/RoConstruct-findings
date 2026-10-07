// roc 2010-06 009a6e80  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6e80
//
// 009a6e80  b97021c200           mov ecx, 0xc22170
// 009a6e85  e936c3afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6e80 { void m(); };
extern T_func_009a6e80 G1_func_009a6e80;
void func_009a6e80()
{
    G1_func_009a6e80.m();
}
