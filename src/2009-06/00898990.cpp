// roc 2009-06 00898990  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898990
//
// 00898990  b9f04da400           mov ecx, 0xa44df0
// 00898995  e97619b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898990 { void m(); };
extern T_func_00898990 G1_func_00898990;
void func_00898990()
{
    G1_func_00898990.m();
}
