// roc 2008-06 007fba30  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fba30
//
// 007fba30  b9c00a9700           mov ecx, 0x970ac0
// 007fba35  e986f1c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fba30 { void m(); };
extern T_func_007fba30 G1_func_007fba30;
void func_007fba30()
{
    G1_func_007fba30.m();
}
