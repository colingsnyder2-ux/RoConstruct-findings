// roc 2010-06 009a4750  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a4750
//
// 009a4750  b91805c200           mov ecx, 0xc20518
// 009a4755  e966eaafff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a4750 { void m(); };
extern T_func_009a4750 G1_func_009a4750;
void func_009a4750()
{
    G1_func_009a4750.m();
}
