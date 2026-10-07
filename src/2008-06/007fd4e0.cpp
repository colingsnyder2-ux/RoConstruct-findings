// roc 2008-06 007fd4e0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd4e0
//
// 007fd4e0  b9684e9700           mov ecx, 0x974e68
// 007fd4e5  e95668caff           jmp 0x4a3d40
// auto-matched from its assembly shape

struct T_func_007fd4e0 { void m(); };
extern T_func_007fd4e0 G1_func_007fd4e0;
void func_007fd4e0()
{
    G1_func_007fd4e0.m();
}
