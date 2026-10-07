// roc 2011-06 00a3abb0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3abb0
//
// 00a3abb0  b9a8d4cc00           mov ecx, 0xccd4a8
// 00a3abb5  e90625a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3abb0 { void m(); };
extern T_func_00a3abb0 G1_func_00a3abb0;
void func_00a3abb0()
{
    G1_func_00a3abb0.m();
}
