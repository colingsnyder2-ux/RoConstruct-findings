// roc 2008-06 007fd3e0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd3e0
//
// 007fd3e0  b938529700           mov ecx, 0x975238
// 007fd3e5  e9d6d7c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fd3e0 { void m(); };
extern T_func_007fd3e0 G1_func_007fd3e0;
void func_007fd3e0()
{
    G1_func_007fd3e0.m();
}
