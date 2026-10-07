// roc 2009-06 0086e780  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086e780
//
// 0086e780  b984e9a400           mov ecx, 0xa4e984
// 0086e785  e9c64fc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086e780 { void m(); };
extern T_func_0086e780 G1_func_0086e780;
void func_0086e780()
{
    G1_func_0086e780.m();
}
