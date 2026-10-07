// roc 2010-06 009a7130  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a7130
//
// 009a7130  b9a024c200           mov ecx, 0xc224a0
// 009a7135  e986c0afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a7130 { void m(); };
extern T_func_009a7130 G1_func_009a7130;
void func_009a7130()
{
    G1_func_009a7130.m();
}
