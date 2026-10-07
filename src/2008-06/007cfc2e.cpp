// roc 2008-06 007cfc2e  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007cfc2e
//
// 007cfc2e  b9e80f9700           mov ecx, 0x970fe8
// 007cfc33  e9e840deff           jmp 0x5b3d20
// auto-matched from its assembly shape

struct T_func_007cfc2e { void m(); };
extern T_func_007cfc2e G1_func_007cfc2e;
void func_007cfc2e()
{
    G1_func_007cfc2e.m();
}
