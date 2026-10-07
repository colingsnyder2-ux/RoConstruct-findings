// roc 2008-06 008018c0  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008018c0
//
// 008018c0  b9aced9700           mov ecx, 0x97edac
// 008018c5  e980acfbff           jmp 0x7bc54a
// auto-matched from its assembly shape

struct T_func_008018c0 { void m(); };
extern T_func_008018c0 G1_func_008018c0;
void func_008018c0()
{
    G1_func_008018c0.m();
}
