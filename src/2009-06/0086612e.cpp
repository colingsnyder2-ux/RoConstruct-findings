// roc 2009-06 0086612e  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086612e
//
// 0086612e  b904f1a300           mov ecx, 0xa3f104
// 00866133  e9189ebdff           jmp 0x43ff50
// auto-matched from its assembly shape

struct T_func_0086612e { void m(); };
extern T_func_0086612e G1_func_0086612e;
void func_0086612e()
{
    G1_func_0086612e.m();
}
