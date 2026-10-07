// roc 2008-06 007d12b0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d12b0
//
// 007d12b0  b908559700           mov ecx, 0x975508
// 007d12b5  e99686c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d12b0 { void m(); };
extern T_func_007d12b0 G1_func_007d12b0;
void func_007d12b0()
{
    G1_func_007d12b0.m();
}
