// roc 2011-06 00a39ac0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39ac0
//
// 00a39ac0  b998bacc00           mov ecx, 0xccba98
// 00a39ac5  e9f635a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a39ac0 { void m(); };
extern T_func_00a39ac0 G1_func_00a39ac0;
void func_00a39ac0()
{
    G1_func_00a39ac0.m();
}
