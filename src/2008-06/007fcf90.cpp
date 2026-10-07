// roc 2008-06 007fcf90  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcf90
//
// 007fcf90  b918419700           mov ecx, 0x974118
// 007fcf95  e926dcc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fcf90 { void m(); };
extern T_func_007fcf90 G1_func_007fcf90;
void func_007fcf90()
{
    G1_func_007fcf90.m();
}
