// roc 2009-06 00898770  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898770
//
// 00898770  b98068a400           mov ecx, 0xa46880
// 00898775  e9961bb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898770 { void m(); };
extern T_func_00898770 G1_func_00898770;
void func_00898770()
{
    G1_func_00898770.m();
}
