// roc 2009-06 0086e760  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086e760
//
// 0086e760  b9c8eaa400           mov ecx, 0xa4eac8
// 0086e765  e9e64fc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086e760 { void m(); };
extern T_func_0086e760 G1_func_0086e760;
void func_0086e760()
{
    G1_func_0086e760.m();
}
