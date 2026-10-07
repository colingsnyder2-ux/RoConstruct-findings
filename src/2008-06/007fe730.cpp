// roc 2008-06 007fe730  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe730
//
// 007fe730  b9b07d9700           mov ecx, 0x977db0
// 007fe735  e986c4c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe730 { void m(); };
extern T_func_007fe730 G1_func_007fe730;
void func_007fe730()
{
    G1_func_007fe730.m();
}
