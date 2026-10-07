// roc 2008-06 007d60c0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d60c0
//
// 007d60c0  b904a59700           mov ecx, 0x97a504
// 007d60c5  e98638c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d60c0 { void m(); };
extern T_func_007d60c0 G1_func_007d60c0;
void func_007d60c0()
{
    G1_func_007d60c0.m();
}
