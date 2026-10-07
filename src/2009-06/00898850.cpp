// roc 2009-06 00898850  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898850
//
// 00898850  b9905da400           mov ecx, 0xa45d90
// 00898855  e9b61ab7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898850 { void m(); };
extern T_func_00898850 G1_func_00898850;
void func_00898850()
{
    G1_func_00898850.m();
}
