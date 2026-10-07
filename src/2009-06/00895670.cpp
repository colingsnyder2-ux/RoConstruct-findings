// roc 2009-06 00895670  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895670
//
// 00895670  b938dea300           mov ecx, 0xa3de38
// 00895675  e996a1d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00895670 { void m(); };
extern T_func_00895670 G1_func_00895670;
void func_00895670()
{
    G1_func_00895670.m();
}
