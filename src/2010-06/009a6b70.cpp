// roc 2010-06 009a6b70  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6b70
//
// 009a6b70  b9401cc200           mov ecx, 0xc21c40
// 009a6b75  e946c6afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6b70 { void m(); };
extern T_func_009a6b70 G1_func_009a6b70;
void func_009a6b70()
{
    G1_func_009a6b70.m();
}
