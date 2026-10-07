// roc 2008-06 007fba50  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fba50
//
// 007fba50  b930099700           mov ecx, 0x970930
// 007fba55  e966f1c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fba50 { void m(); };
extern T_func_007fba50 G1_func_007fba50;
void func_007fba50()
{
    G1_func_007fba50.m();
}
