// roc 2009-06 00862ae0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00862ae0
//
// 00862ae0  b9103fa400           mov ecx, 0xa43f10
// 00862ae5  e9660cc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00862ae0 { void m(); };
extern T_func_00862ae0 G1_func_00862ae0;
void func_00862ae0()
{
    G1_func_00862ae0.m();
}
