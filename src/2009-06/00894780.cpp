// roc 2009-06 00894780  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894780
//
// 00894780  b980a7a300           mov ecx, 0xa3a780
// 00894785  e986c9baff           jmp 0x441110
// auto-matched from its assembly shape

struct T_func_00894780 { void m(); };
extern T_func_00894780 G1_func_00894780;
void func_00894780()
{
    G1_func_00894780.m();
}
