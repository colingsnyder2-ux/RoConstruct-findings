// roc 2009-06 00862aa0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00862aa0
//
// 00862aa0  b9c03fa400           mov ecx, 0xa43fc0
// 00862aa5  e9a60cc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00862aa0 { void m(); };
extern T_func_00862aa0 G1_func_00862aa0;
void func_00862aa0()
{
    G1_func_00862aa0.m();
}
