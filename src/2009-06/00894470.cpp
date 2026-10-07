// roc 2009-06 00894470  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894470
//
// 00894470  b930a3a300           mov ecx, 0xa3a330
// 00894475  e9965eb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00894470 { void m(); };
extern T_func_00894470 G1_func_00894470;
void func_00894470()
{
    G1_func_00894470.m();
}
