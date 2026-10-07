// roc 2009-06 00866116  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00866116
//
// 00866116  b904f1a300           mov ecx, 0xa3f104
// 0086611b  e9309ebdff           jmp 0x43ff50
// auto-matched from its assembly shape

struct T_func_00866116 { void m(); };
extern T_func_00866116 G1_func_00866116;
void func_00866116()
{
    G1_func_00866116.m();
}
