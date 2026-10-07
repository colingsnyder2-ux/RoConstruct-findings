// roc 2008-06 007fcfb0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcfb0
//
// 007fcfb0  b9d0429700           mov ecx, 0x9742d0
// 007fcfb5  e92677d6ff           jmp 0x5646e0
// auto-matched from its assembly shape

struct T_func_007fcfb0 { void m(); };
extern T_func_007fcfb0 G1_func_007fcfb0;
void func_007fcfb0()
{
    G1_func_007fcfb0.m();
}
