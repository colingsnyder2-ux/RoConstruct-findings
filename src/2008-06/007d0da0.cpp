// roc 2008-06 007d0da0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d0da0
//
// 007d0da0  b900509700           mov ecx, 0x975000
// 007d0da5  e9a68bc3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d0da0 { void m(); };
extern T_func_007d0da0 G1_func_007d0da0;
void func_007d0da0()
{
    G1_func_007d0da0.m();
}
