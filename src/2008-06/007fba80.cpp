// roc 2008-06 007fba80  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fba80
//
// 007fba80  b9d8069700           mov ecx, 0x9706d8
// 007fba85  e936f1c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fba80 { void m(); };
extern T_func_007fba80 G1_func_007fba80;
void func_007fba80()
{
    G1_func_007fba80.m();
}
