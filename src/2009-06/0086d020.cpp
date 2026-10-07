// roc 2009-06 0086d020  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086d020
//
// 0086d020  b960dfa400           mov ecx, 0xa4df60
// 0086d025  e92667c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086d020 { void m(); };
extern T_func_0086d020 G1_func_0086d020;
void func_0086d020()
{
    G1_func_0086d020.m();
}
