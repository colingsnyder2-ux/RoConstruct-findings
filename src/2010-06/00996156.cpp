// roc 2010-06 00996156  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00996156
//
// 00996156  b99088c100           mov ecx, 0xc18890
// 0099615b  e900a6daff           jmp 0x740760
// auto-matched from its assembly shape

struct T_func_00996156 { void m(); };
extern T_func_00996156 G1_func_00996156;
void func_00996156()
{
    G1_func_00996156.m();
}
