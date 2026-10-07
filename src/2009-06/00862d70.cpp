// roc 2009-06 00862d70  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00862d70
//
// 00862d70  b91041a400           mov ecx, 0xa44110
// 00862d75  e9d609c5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00862d70 { void m(); };
extern T_func_00862d70 G1_func_00862d70;
void func_00862d70()
{
    G1_func_00862d70.m();
}
