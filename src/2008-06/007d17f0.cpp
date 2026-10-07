// roc 2008-06 007d17f0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d17f0
//
// 007d17f0  b9485b9700           mov ecx, 0x975b48
// 007d17f5  e95681c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d17f0 { void m(); };
extern T_func_007d17f0 G1_func_007d17f0;
void func_007d17f0()
{
    G1_func_007d17f0.m();
}
