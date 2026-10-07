// roc 2009-06 0086d240  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086d240
//
// 0086d240  b928e1a400           mov ecx, 0xa4e128
// 0086d245  e90665c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086d240 { void m(); };
extern T_func_0086d240 G1_func_0086d240;
void func_0086d240()
{
    G1_func_0086d240.m();
}
