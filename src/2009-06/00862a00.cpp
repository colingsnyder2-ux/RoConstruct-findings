// roc 2009-06 00862a00  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00862a00
//
// 00862a00  b9d03ea400           mov ecx, 0xa43ed0
// 00862a05  e9460dc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00862a00 { void m(); };
extern T_func_00862a00 G1_func_00862a00;
void func_00862a00()
{
    G1_func_00862a00.m();
}
