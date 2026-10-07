// roc 2008-06 007fbbe0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbbe0
//
// 007fbbe0  b9280d9700           mov ecx, 0x970d28
// 007fbbe5  e9d6efc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fbbe0 { void m(); };
extern T_func_007fbbe0 G1_func_007fbbe0;
void func_007fbbe0()
{
    G1_func_007fbbe0.m();
}
