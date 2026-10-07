// roc 2009-06 0086c1e0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086c1e0
//
// 0086c1e0  b938cfa400           mov ecx, 0xa4cf38
// 0086c1e5  e96675c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086c1e0 { void m(); };
extern T_func_0086c1e0 G1_func_0086c1e0;
void func_0086c1e0()
{
    G1_func_0086c1e0.m();
}
