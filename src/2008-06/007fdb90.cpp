// roc 2008-06 007fdb90  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdb90
//
// 007fdb90  b9685d9700           mov ecx, 0x975d68
// 007fdb95  e926d0c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fdb90 { void m(); };
extern T_func_007fdb90 G1_func_007fdb90;
void func_007fdb90()
{
    G1_func_007fdb90.m();
}
