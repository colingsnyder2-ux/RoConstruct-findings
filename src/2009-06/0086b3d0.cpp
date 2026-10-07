// roc 2009-06 0086b3d0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086b3d0
//
// 0086b3d0  b930c6a400           mov ecx, 0xa4c630
// 0086b3d5  e97683c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086b3d0 { void m(); };
extern T_func_0086b3d0 G1_func_0086b3d0;
void func_0086b3d0()
{
    G1_func_0086b3d0.m();
}
