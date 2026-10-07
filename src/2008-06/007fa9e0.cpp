// roc 2008-06 007fa9e0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa9e0
//
// 007fa9e0  b994d19600           mov ecx, 0x96d194
// 007fa9e5  e9c6a2d9ff           jmp 0x594cb0
// auto-matched from its assembly shape

struct T_func_007fa9e0 { void m(); };
extern T_func_007fa9e0 G1_func_007fa9e0;
void func_007fa9e0()
{
    G1_func_007fa9e0.m();
}
