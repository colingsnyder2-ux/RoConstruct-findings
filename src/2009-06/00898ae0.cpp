// roc 2009-06 00898ae0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898ae0
//
// 00898ae0  b90895a400           mov ecx, 0xa49508
// 00898ae5  e99646d5ff           jmp 0x5ed180
// auto-matched from its assembly shape

struct T_func_00898ae0 { void m(); };
extern T_func_00898ae0 G1_func_00898ae0;
void func_00898ae0()
{
    G1_func_00898ae0.m();
}
