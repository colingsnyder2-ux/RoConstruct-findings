// roc 2009-06 0089a780  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a780
//
// 0089a780  b990c5a400           mov ecx, 0xa4c590
// 0089a785  e98650d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_0089a780 { void m(); };
extern T_func_0089a780 G1_func_0089a780;
void func_0089a780()
{
    G1_func_0089a780.m();
}
