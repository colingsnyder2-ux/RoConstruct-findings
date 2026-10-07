// roc 2011-06 00a3aba0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3aba0
//
// 00a3aba0  b928d5cc00           mov ecx, 0xccd528
// 00a3aba5  e91625a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3aba0 { void m(); };
extern T_func_00a3aba0 G1_func_00a3aba0;
void func_00a3aba0()
{
    G1_func_00a3aba0.m();
}
