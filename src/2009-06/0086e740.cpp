// roc 2009-06 0086e740  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086e740
//
// 0086e740  b928eaa400           mov ecx, 0xa4ea28
// 0086e745  e90650c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086e740 { void m(); };
extern T_func_0086e740 G1_func_0086e740;
void func_0086e740()
{
    G1_func_0086e740.m();
}
