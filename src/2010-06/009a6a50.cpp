// roc 2010-06 009a6a50  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6a50
//
// 009a6a50  b9fc18c200           mov ecx, 0xc218fc
// 009a6a55  e966c7afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6a50 { void m(); };
extern T_func_009a6a50 G1_func_009a6a50;
void func_009a6a50()
{
    G1_func_009a6a50.m();
}
