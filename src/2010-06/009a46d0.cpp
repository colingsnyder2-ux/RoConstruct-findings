// roc 2010-06 009a46d0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a46d0
//
// 009a46d0  b98804c200           mov ecx, 0xc20488
// 009a46d5  e9e6eaafff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a46d0 { void m(); };
extern T_func_009a46d0 G1_func_009a46d0;
void func_009a46d0()
{
    G1_func_009a46d0.m();
}
