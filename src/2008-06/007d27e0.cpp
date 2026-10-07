// roc 2008-06 007d27e0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d27e0
//
// 007d27e0  b964619700           mov ecx, 0x976164
// 007d27e5  e96671c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d27e0 { void m(); };
extern T_func_007d27e0 G1_func_007d27e0;
void func_007d27e0()
{
    G1_func_007d27e0.m();
}
