// roc 2008-06 007fba40  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fba40
//
// 007fba40  b9f8099700           mov ecx, 0x9709f8
// 007fba45  e976f1c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fba40 { void m(); };
extern T_func_007fba40 G1_func_007fba40;
void func_007fba40()
{
    G1_func_007fba40.m();
}
