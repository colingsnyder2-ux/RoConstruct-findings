// roc 2008-06 007fd7b0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd7b0
//
// 007fd7b0  b968569700           mov ecx, 0x975668
// 007fd7b5  e906d4c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fd7b0 { void m(); };
extern T_func_007fd7b0 G1_func_007fd7b0;
void func_007fd7b0()
{
    G1_func_007fd7b0.m();
}
