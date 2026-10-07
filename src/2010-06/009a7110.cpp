// roc 2010-06 009a7110  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a7110
//
// 009a7110  b9dc24c200           mov ecx, 0xc224dc
// 009a7115  e9a6c0afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a7110 { void m(); };
extern T_func_009a7110 G1_func_009a7110;
void func_009a7110()
{
    G1_func_009a7110.m();
}
