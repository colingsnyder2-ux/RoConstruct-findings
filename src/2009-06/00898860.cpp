// roc 2009-06 00898860  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898860
//
// 00898860  b9c85ca400           mov ecx, 0xa45cc8
// 00898865  e9a61ab7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898860 { void m(); };
extern T_func_00898860 G1_func_00898860;
void func_00898860()
{
    G1_func_00898860.m();
}
