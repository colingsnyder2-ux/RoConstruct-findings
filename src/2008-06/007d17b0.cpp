// roc 2008-06 007d17b0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d17b0
//
// 007d17b0  b9c85a9700           mov ecx, 0x975ac8
// 007d17b5  e99681c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d17b0 { void m(); };
extern T_func_007d17b0 G1_func_007d17b0;
void func_007d17b0()
{
    G1_func_007d17b0.m();
}
