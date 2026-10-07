// roc 2011-06 00a3aca0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3aca0
//
// 00a3aca0  b960d9cc00           mov ecx, 0xccd960
// 00a3aca5  e91624a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3aca0 { void m(); };
extern T_func_00a3aca0 G1_func_00a3aca0;
void func_00a3aca0()
{
    G1_func_00a3aca0.m();
}
