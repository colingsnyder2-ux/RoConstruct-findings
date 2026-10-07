// roc 2008-06 007fd4f0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd4f0
//
// 007fd4f0  b958519700           mov ecx, 0x975158
// 007fd4f5  e926ddc1ff           jmp 0x41b220
// auto-matched from its assembly shape

struct T_func_007fd4f0 { void m(); };
extern T_func_007fd4f0 G1_func_007fd4f0;
void func_007fd4f0()
{
    G1_func_007fd4f0.m();
}
