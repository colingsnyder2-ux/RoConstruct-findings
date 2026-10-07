// roc 2009-06 0086c240  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086c240
//
// 0086c240  b9b8cea400           mov ecx, 0xa4ceb8
// 0086c245  e90675c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086c240 { void m(); };
extern T_func_0086c240 G1_func_0086c240;
void func_0086c240()
{
    G1_func_0086c240.m();
}
