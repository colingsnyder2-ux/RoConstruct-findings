// roc 2009-06 00898730  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898730
//
// 00898730  b9a06ba400           mov ecx, 0xa46ba0
// 00898735  e9d61bb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898730 { void m(); };
extern T_func_00898730 G1_func_00898730;
void func_00898730()
{
    G1_func_00898730.m();
}
