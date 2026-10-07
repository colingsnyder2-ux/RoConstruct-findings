// roc 2009-06 0086ac20  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086ac20
//
// 0086ac20  b9c8bda400           mov ecx, 0xa4bdc8
// 0086ac25  e9268bc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086ac20 { void m(); };
extern T_func_0086ac20 G1_func_0086ac20;
void func_0086ac20()
{
    G1_func_0086ac20.m();
}
