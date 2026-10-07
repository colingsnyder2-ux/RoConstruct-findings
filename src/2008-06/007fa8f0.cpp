// roc 2008-06 007fa8f0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa8f0
//
// 007fa8f0  b914d19600           mov ecx, 0x96d114
// 007fa8f5  e906b2d9ff           jmp 0x595b00
// auto-matched from its assembly shape

struct T_func_007fa8f0 { void m(); };
extern T_func_007fa8f0 G1_func_007fa8f0;
void func_007fa8f0()
{
    G1_func_007fa8f0.m();
}
