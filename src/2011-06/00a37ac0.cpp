// roc 2011-06 00a37ac0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37ac0
//
// 00a37ac0  b9f804cc00           mov ecx, 0xcc04f8
// 00a37ac5  e976609dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37ac0 { void m(); };
extern T_func_00a37ac0 G1_func_00a37ac0;
void func_00a37ac0()
{
    G1_func_00a37ac0.m();
}
