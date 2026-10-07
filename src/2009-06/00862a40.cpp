// roc 2009-06 00862a40  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00862a40
//
// 00862a40  b9443fa400           mov ecx, 0xa43f44
// 00862a45  e9060dc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00862a40 { void m(); };
extern T_func_00862a40 G1_func_00862a40;
void func_00862a40()
{
    G1_func_00862a40.m();
}
