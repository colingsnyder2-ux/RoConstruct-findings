// roc 2008-06 007d2780  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d2780
//
// 007d2780  b988629700           mov ecx, 0x976288
// 007d2785  e9c671c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d2780 { void m(); };
extern T_func_007d2780 G1_func_007d2780;
void func_007d2780()
{
    G1_func_007d2780.m();
}
