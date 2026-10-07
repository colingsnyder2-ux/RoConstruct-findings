// roc 2009-06 008674c0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008674c0
//
// 008674c0  b9b0aba400           mov ecx, 0xa4abb0
// 008674c5  e986c2c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_008674c0 { void m(); };
extern T_func_008674c0 G1_func_008674c0;
void func_008674c0()
{
    G1_func_008674c0.m();
}
