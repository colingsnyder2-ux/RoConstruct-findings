// roc 2009-06 0086ea10  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086ea10
//
// 0086ea10  b938f0a400           mov ecx, 0xa4f038
// 0086ea15  e9364dc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086ea10 { void m(); };
extern T_func_0086ea10 G1_func_0086ea10;
void func_0086ea10()
{
    G1_func_0086ea10.m();
}
