// roc 2011-06 00a3ac50  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ac50
//
// 00a3ac50  b9f0d6cc00           mov ecx, 0xccd6f0
// 00a3ac55  e9e62e9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a3ac50 { void m(); };
extern T_func_00a3ac50 G1_func_00a3ac50;
void func_00a3ac50()
{
    G1_func_00a3ac50.m();
}
