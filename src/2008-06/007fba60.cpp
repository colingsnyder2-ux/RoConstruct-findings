// roc 2008-06 007fba60  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fba60
//
// 007fba60  b968089700           mov ecx, 0x970868
// 007fba65  e956f1c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fba60 { void m(); };
extern T_func_007fba60 G1_func_007fba60;
void func_007fba60()
{
    G1_func_007fba60.m();
}
