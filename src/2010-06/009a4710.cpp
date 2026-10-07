// roc 2010-06 009a4710  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a4710
//
// 009a4710  b94003c200           mov ecx, 0xc20340
// 009a4715  e9a6eaafff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a4710 { void m(); };
extern T_func_009a4710 G1_func_009a4710;
void func_009a4710()
{
    G1_func_009a4710.m();
}
