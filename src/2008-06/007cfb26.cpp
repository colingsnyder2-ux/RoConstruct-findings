// roc 2008-06 007cfb26  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007cfb26
//
// 007cfb26  b9d44a9700           mov ecx, 0x974ad4
// 007cfb2b  e9f041deff           jmp 0x5b3d20
// auto-matched from its assembly shape

struct T_func_007cfb26 { void m(); };
extern T_func_007cfb26 G1_func_007cfb26;
void func_007cfb26()
{
    G1_func_007cfb26.m();
}
