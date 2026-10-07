// roc 2010-06 009a4730  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a4730
//
// 009a4730  b90804c200           mov ecx, 0xc20408
// 009a4735  e986eaafff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a4730 { void m(); };
extern T_func_009a4730 G1_func_009a4730;
void func_009a4730()
{
    G1_func_009a4730.m();
}
