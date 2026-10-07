// roc 2008-06 007cfaf6  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007cfaf6
//
// 007cfaf6  b9d44a9700           mov ecx, 0x974ad4
// 007cfafb  e92042deff           jmp 0x5b3d20
// auto-matched from its assembly shape

struct T_func_007cfaf6 { void m(); };
extern T_func_007cfaf6 G1_func_007cfaf6;
void func_007cfaf6()
{
    G1_func_007cfaf6.m();
}
