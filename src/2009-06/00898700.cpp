// roc 2009-06 00898700  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898700
//
// 00898700  b9f86da400           mov ecx, 0xa46df8
// 00898705  e9061cb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898700 { void m(); };
extern T_func_00898700 G1_func_00898700;
void func_00898700()
{
    G1_func_00898700.m();
}
