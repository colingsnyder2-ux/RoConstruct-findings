// roc 2010-06 009a6a30  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6a30
//
// 009a6a30  b9d01ac200           mov ecx, 0xc21ad0
// 009a6a35  e986c7afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6a30 { void m(); };
extern T_func_009a6a30 G1_func_009a6a30;
void func_009a6a30()
{
    G1_func_009a6a30.m();
}
