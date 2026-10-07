// roc 2010-06 00989ac0  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00989ac0
//
// 00989ac0  b9d847c000           mov ecx, 0xc047d8
// 00989ac5  e9f696b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00989ac0 { void m(); };
extern T_func_00989ac0 G1_func_00989ac0;
void func_00989ac0()
{
    G1_func_00989ac0.m();
}
