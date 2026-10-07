// roc 2008-06 007fda60  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fda60
//
// 007fda60  b9885b9700           mov ecx, 0x975b88
// 007fda65  e956d1c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fda60 { void m(); };
extern T_func_007fda60 G1_func_007fda60;
void func_007fda60()
{
    G1_func_007fda60.m();
}
