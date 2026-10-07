// roc 2009-06 0086bcf0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086bcf0
//
// 0086bcf0  b948caa400           mov ecx, 0xa4ca48
// 0086bcf5  e9567ac4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086bcf0 { void m(); };
extern T_func_0086bcf0 G1_func_0086bcf0;
void func_0086bcf0()
{
    G1_func_0086bcf0.m();
}
