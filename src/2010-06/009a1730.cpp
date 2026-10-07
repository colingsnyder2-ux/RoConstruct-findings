// roc 2010-06 009a1730  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a1730
//
// 009a1730  b9d8dfc100           mov ecx, 0xc1dfd8
// 009a1735  e9861ab0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a1730 { void m(); };
extern T_func_009a1730 G1_func_009a1730;
void func_009a1730()
{
    G1_func_009a1730.m();
}
