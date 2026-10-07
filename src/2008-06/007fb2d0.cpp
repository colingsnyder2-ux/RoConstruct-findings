// roc 2008-06 007fb2d0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb2d0
//
// 007fb2d0  b998019700           mov ecx, 0x970198
// 007fb2d5  e9e6f8c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fb2d0 { void m(); };
extern T_func_007fb2d0 G1_func_007fb2d0;
void func_007fb2d0()
{
    G1_func_007fb2d0.m();
}
