// roc 2009-06 008660fe  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008660fe
//
// 008660fe  b904f1a300           mov ecx, 0xa3f104
// 00866103  e9489ebdff           jmp 0x43ff50
// auto-matched from its assembly shape

struct T_func_008660fe { void m(); };
extern T_func_008660fe G1_func_008660fe;
void func_008660fe()
{
    G1_func_008660fe.m();
}
