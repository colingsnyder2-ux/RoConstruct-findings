// roc 2009-06 008674a0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008674a0
//
// 008674a0  b9f8aaa400           mov ecx, 0xa4aaf8
// 008674a5  e9a6c2c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_008674a0 { void m(); };
extern T_func_008674a0 G1_func_008674a0;
void func_008674a0()
{
    G1_func_008674a0.m();
}
