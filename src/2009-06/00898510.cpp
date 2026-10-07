// roc 2009-06 00898510  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898510
//
// 00898510  b93086a400           mov ecx, 0xa48630
// 00898515  e9f61db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898510 { void m(); };
extern T_func_00898510 G1_func_00898510;
void func_00898510()
{
    G1_func_00898510.m();
}
