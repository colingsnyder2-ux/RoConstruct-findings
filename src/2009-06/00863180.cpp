// roc 2009-06 00863180  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00863180
//
// 00863180  b93043a400           mov ecx, 0xa44330
// 00863185  e9c605c5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00863180 { void m(); };
extern T_func_00863180 G1_func_00863180;
void func_00863180()
{
    G1_func_00863180.m();
}
