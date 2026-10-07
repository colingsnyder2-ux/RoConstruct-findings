// roc 2008-06 007fd4d0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd4d0
//
// 007fd4d0  b9804f9700           mov ecx, 0x974f80
// 007fd4d5  e90660caff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fd4d0 { void m(); };
extern T_func_007fd4d0 G1_func_007fd4d0;
void func_007fd4d0()
{
    G1_func_007fd4d0.m();
}
