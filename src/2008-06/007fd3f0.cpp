// roc 2008-06 007fd3f0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd3f0
//
// 007fd3f0  b910519700           mov ecx, 0x975110
// 007fd3f5  e9e660caff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fd3f0 { void m(); };
extern T_func_007fd3f0 G1_func_007fd3f0;
void func_007fd3f0()
{
    G1_func_007fd3f0.m();
}
