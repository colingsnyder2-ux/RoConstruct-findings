// roc 2009-06 0086ea50  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086ea50
//
// 0086ea50  b9e4eea400           mov ecx, 0xa4eee4
// 0086ea55  e9f64cc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086ea50 { void m(); };
extern T_func_0086ea50 G1_func_0086ea50;
void func_0086ea50()
{
    G1_func_0086ea50.m();
}
