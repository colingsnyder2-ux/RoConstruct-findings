// roc 2008-06 007da5d0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007da5d0
//
// 007da5d0  b95cd49700           mov ecx, 0x97d45c
// 007da5d5  e976f3c2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007da5d0 { void m(); };
extern T_func_007da5d0 G1_func_007da5d0;
void func_007da5d0()
{
    G1_func_007da5d0.m();
}
