// roc 2008-06 007fb9d0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb9d0
//
// 007fb9d0  b940039700           mov ecx, 0x970340
// 007fb9d5  e9067bcaff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fb9d0 { void m(); };
extern T_func_007fb9d0 G1_func_007fb9d0;
void func_007fb9d0()
{
    G1_func_007fb9d0.m();
}
