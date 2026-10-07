// roc 2009-06 008959c0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008959c0
//
// 008959c0  b950e7a300           mov ecx, 0xa3e750
// 008959c5  e9769dc3ff           jmp 0x4cf740
// auto-matched from its assembly shape

struct T_func_008959c0 { void m(); };
extern T_func_008959c0 G1_func_008959c0;
void func_008959c0()
{
    G1_func_008959c0.m();
}
