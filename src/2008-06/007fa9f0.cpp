// roc 2008-06 007fa9f0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa9f0
//
// 007fa9f0  b9b4d19600           mov ecx, 0x96d1b4
// 007fa9f5  e9b6a2d9ff           jmp 0x594cb0
// auto-matched from its assembly shape

struct T_func_007fa9f0 { void m(); };
extern T_func_007fa9f0 G1_func_007fa9f0;
void func_007fa9f0()
{
    G1_func_007fa9f0.m();
}
