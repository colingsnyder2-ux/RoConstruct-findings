// roc 2010-06 009a6b30  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6b30
//
// 009a6b30  b9941ac200           mov ecx, 0xc21a94
// 009a6b35  e986c6afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6b30 { void m(); };
extern T_func_009a6b30 G1_func_009a6b30;
void func_009a6b30()
{
    G1_func_009a6b30.m();
}
