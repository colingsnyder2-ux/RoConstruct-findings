// roc 2008-06 007cfb0e  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007cfb0e
//
// 007cfb0e  b9d44a9700           mov ecx, 0x974ad4
// 007cfb13  e90842deff           jmp 0x5b3d20
// auto-matched from its assembly shape

struct T_func_007cfb0e { void m(); };
extern T_func_007cfb0e G1_func_007cfb0e;
void func_007cfb0e()
{
    G1_func_007cfb0e.m();
}
