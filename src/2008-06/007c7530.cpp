// roc 2008-06 007c7530  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c7530
//
// 007c7530  b9c8039700           mov ecx, 0x9703c8
// 007c7535  e91624c4ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007c7530 { void m(); };
extern T_func_007c7530 G1_func_007c7530;
void func_007c7530()
{
    G1_func_007c7530.m();
}
