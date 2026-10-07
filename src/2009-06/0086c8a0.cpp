// roc 2009-06 0086c8a0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086c8a0
//
// 0086c8a0  b928daa400           mov ecx, 0xa4da28
// 0086c8a5  e9a66ec4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086c8a0 { void m(); };
extern T_func_0086c8a0 G1_func_0086c8a0;
void func_0086c8a0()
{
    G1_func_0086c8a0.m();
}
