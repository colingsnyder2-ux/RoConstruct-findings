// roc 2008-06 007fd7d0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd7d0
//
// 007fd7d0  b9b8549700           mov ecx, 0x9754b8
// 007fd7d5  e9365cdaff           jmp 0x5a3410
// auto-matched from its assembly shape

struct T_func_007fd7d0 { void m(); };
extern T_func_007fd7d0 G1_func_007fd7d0;
void func_007fd7d0()
{
    G1_func_007fd7d0.m();
}
