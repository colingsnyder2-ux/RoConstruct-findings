// roc 2009-06 008674e0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008674e0
//
// 008674e0  b918aaa400           mov ecx, 0xa4aa18
// 008674e5  e966c2c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_008674e0 { void m(); };
extern T_func_008674e0 G1_func_008674e0;
void func_008674e0()
{
    G1_func_008674e0.m();
}
