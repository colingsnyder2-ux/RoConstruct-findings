// roc 2008-06 007fe1d0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe1d0
//
// 007fe1d0  b9986b9700           mov ecx, 0x976b98
// 007fe1d5  e90653caff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fe1d0 { void m(); };
extern T_func_007fe1d0 G1_func_007fe1d0;
void func_007fe1d0()
{
    G1_func_007fe1d0.m();
}
