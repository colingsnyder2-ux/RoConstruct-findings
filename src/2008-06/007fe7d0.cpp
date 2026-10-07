// roc 2008-06 007fe7d0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe7d0
//
// 007fe7d0  b9388b9700           mov ecx, 0x978b38
// 007fe7d5  e9e6c3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe7d0 { void m(); };
extern T_func_007fe7d0 G1_func_007fe7d0;
void func_007fe7d0()
{
    G1_func_007fe7d0.m();
}
