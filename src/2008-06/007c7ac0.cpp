// roc 2008-06 007c7ac0  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c7ac0
//
// 007c7ac0  b9480c9700           mov ecx, 0x970c48
// 007c7ac5  e9861ec4ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007c7ac0 { void m(); };
extern T_func_007c7ac0 G1_func_007c7ac0;
void func_007c7ac0()
{
    G1_func_007c7ac0.m();
}
