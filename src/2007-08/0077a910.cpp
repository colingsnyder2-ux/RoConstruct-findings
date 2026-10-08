// roc 2007-08 0077a910  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a910
//
// 0077a910  b9483f8c00           mov ecx, 0x8c3f48
// 0077a915  e9a6c3c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a910 { void m(); };
extern T_func_0077a910 G1_func_0077a910;
void func_0077a910()
{
    G1_func_0077a910.m();
}
