// roc 2009-06 0086c1c0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086c1c0
//
// 0086c1c0  b9d8cca400           mov ecx, 0xa4ccd8
// 0086c1c5  e98675c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086c1c0 { void m(); };
extern T_func_0086c1c0 G1_func_0086c1c0;
void func_0086c1c0()
{
    G1_func_0086c1c0.m();
}
