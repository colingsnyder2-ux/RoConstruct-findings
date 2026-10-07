// roc 2008-06 007fc360  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc360
//
// 007fc360  b9d81a9700           mov ecx, 0x971ad8
// 007fc365  e956e8c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fc360 { void m(); };
extern T_func_007fc360 G1_func_007fc360;
void func_007fc360()
{
    G1_func_007fc360.m();
}
