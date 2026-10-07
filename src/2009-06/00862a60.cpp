// roc 2009-06 00862a60  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00862a60
//
// 00862a60  b9983ea400           mov ecx, 0xa43e98
// 00862a65  e9e60cc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00862a60 { void m(); };
extern T_func_00862a60 G1_func_00862a60;
void func_00862a60()
{
    G1_func_00862a60.m();
}
