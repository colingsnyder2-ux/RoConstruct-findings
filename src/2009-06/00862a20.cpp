// roc 2009-06 00862a20  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00862a20
//
// 00862a20  b9783fa400           mov ecx, 0xa43f78
// 00862a25  e9260dc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00862a20 { void m(); };
extern T_func_00862a20 G1_func_00862a20;
void func_00862a20()
{
    G1_func_00862a20.m();
}
