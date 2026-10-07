// roc 2009-06 00862ac0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00862ac0
//
// 00862ac0  b9643ca400           mov ecx, 0xa43c64
// 00862ac5  e9860cc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00862ac0 { void m(); };
extern T_func_00862ac0 G1_func_00862ac0;
void func_00862ac0()
{
    G1_func_00862ac0.m();
}
