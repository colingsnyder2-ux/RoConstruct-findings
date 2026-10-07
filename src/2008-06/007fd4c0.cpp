// roc 2008-06 007fd4c0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd4c0
//
// 007fd4c0  b9384f9700           mov ecx, 0x974f38
// 007fd4c5  e91660caff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fd4c0 { void m(); };
extern T_func_007fd4c0 G1_func_007fd4c0;
void func_007fd4c0()
{
    G1_func_007fd4c0.m();
}
