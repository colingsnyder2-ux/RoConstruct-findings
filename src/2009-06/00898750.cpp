// roc 2009-06 00898750  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898750
//
// 00898750  b9106aa400           mov ecx, 0xa46a10
// 00898755  e9b61bb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898750 { void m(); };
extern T_func_00898750 G1_func_00898750;
void func_00898750()
{
    G1_func_00898750.m();
}
