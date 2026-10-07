// roc 2009-06 00862a80  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00862a80
//
// 00862a80  b9c03da400           mov ecx, 0xa43dc0
// 00862a85  e9c60cc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00862a80 { void m(); };
extern T_func_00862a80 G1_func_00862a80;
void func_00862a80()
{
    G1_func_00862a80.m();
}
