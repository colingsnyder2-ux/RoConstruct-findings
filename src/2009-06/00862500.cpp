// roc 2009-06 00862500  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00862500
//
// 00862500  b9603ba400           mov ecx, 0xa43b60
// 00862505  e94612c5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00862500 { void m(); };
extern T_func_00862500 G1_func_00862500;
void func_00862500()
{
    G1_func_00862500.m();
}
