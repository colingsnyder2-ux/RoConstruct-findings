// roc 2009-06 00898ac0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898ac0
//
// 00898ac0  b9e896a400           mov ecx, 0xa496e8
// 00898ac5  e9464ad5ff           jmp 0x5ed510
// auto-matched from its assembly shape

struct T_func_00898ac0 { void m(); };
extern T_func_00898ac0 G1_func_00898ac0;
void func_00898ac0()
{
    G1_func_00898ac0.m();
}
