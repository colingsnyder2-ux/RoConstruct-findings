// roc 2008-06 007d8140  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d8140
//
// 007d8140  b958b79700           mov ecx, 0x97b758
// 007d8145  e90618c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d8140 { void m(); };
extern T_func_007d8140 G1_func_007d8140;
void func_007d8140()
{
    G1_func_007d8140.m();
}
