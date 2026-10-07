// roc 2008-06 007d0de0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d0de0
//
// 007d0de0  b9f84e9700           mov ecx, 0x974ef8
// 007d0de5  e9668bc3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d0de0 { void m(); };
extern T_func_007d0de0 G1_func_007d0de0;
void func_007d0de0()
{
    G1_func_007d0de0.m();
}
