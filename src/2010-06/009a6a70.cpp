// roc 2010-06 009a6a70  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6a70
//
// 009a6a70  b9141ac200           mov ecx, 0xc21a14
// 009a6a75  e946c7afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6a70 { void m(); };
extern T_func_009a6a70 G1_func_009a6a70;
void func_009a6a70()
{
    G1_func_009a6a70.m();
}
