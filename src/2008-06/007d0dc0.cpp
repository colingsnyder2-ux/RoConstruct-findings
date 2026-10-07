// roc 2008-06 007d0dc0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d0dc0
//
// 007d0dc0  b9b84e9700           mov ecx, 0x974eb8
// 007d0dc5  e9868bc3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d0dc0 { void m(); };
extern T_func_007d0dc0 G1_func_007d0dc0;
void func_007d0dc0()
{
    G1_func_007d0dc0.m();
}
