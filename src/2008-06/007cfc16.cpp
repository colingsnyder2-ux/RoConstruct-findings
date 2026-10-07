// roc 2008-06 007cfc16  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007cfc16
//
// 007cfc16  b9e80f9700           mov ecx, 0x970fe8
// 007cfc1b  e90041deff           jmp 0x5b3d20
// auto-matched from its assembly shape

struct T_func_007cfc16 { void m(); };
extern T_func_007cfc16 G1_func_007cfc16;
void func_007cfc16()
{
    G1_func_007cfc16.m();
}
