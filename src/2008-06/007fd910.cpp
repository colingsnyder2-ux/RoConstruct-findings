// roc 2008-06 007fd910  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd910
//
// 007fd910  b960589700           mov ecx, 0x975860
// 007fd915  e9a6d2c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fd910 { void m(); };
extern T_func_007fd910 G1_func_007fd910;
void func_007fd910()
{
    G1_func_007fd910.m();
}
