// roc 2010-06 009a6b10  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6b10
//
// 009a6b10  b9d41bc200           mov ecx, 0xc21bd4
// 009a6b15  e9a6c6afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6b10 { void m(); };
extern T_func_009a6b10 G1_func_009a6b10;
void func_009a6b10()
{
    G1_func_009a6b10.m();
}
