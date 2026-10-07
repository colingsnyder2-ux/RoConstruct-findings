// roc 2010-06 009a3770  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a3770
//
// 009a3770  b978f2c100           mov ecx, 0xc1f278
// 009a3775  e946faafff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a3770 { void m(); };
extern T_func_009a3770 G1_func_009a3770;
void func_009a3770()
{
    G1_func_009a3770.m();
}
