// roc 2009-06 00894750  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894750
//
// 00894750  b950aaa300           mov ecx, 0xa3aa50
// 00894755  e996cebaff           jmp 0x4415f0
// auto-matched from its assembly shape

struct T_func_00894750 { void m(); };
extern T_func_00894750 G1_func_00894750;
void func_00894750()
{
    G1_func_00894750.m();
}
