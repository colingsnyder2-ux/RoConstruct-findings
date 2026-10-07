// roc 2008-06 007fde80  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fde80
//
// 007fde80  b990649700           mov ecx, 0x976490
// 007fde85  e9e6ddd9ff           jmp 0x59bc70
// auto-matched from its assembly shape

struct T_func_007fde80 { void m(); };
extern T_func_007fde80 G1_func_007fde80;
void func_007fde80()
{
    G1_func_007fde80.m();
}
