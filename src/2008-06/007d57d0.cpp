// roc 2008-06 007d57d0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d57d0
//
// 007d57d0  b9689d9700           mov ecx, 0x979d68
// 007d57d5  e97641c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d57d0 { void m(); };
extern T_func_007d57d0 G1_func_007d57d0;
void func_007d57d0()
{
    G1_func_007d57d0.m();
}
