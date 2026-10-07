// roc 2011-06 00a3abe0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3abe0
//
// 00a3abe0  b9e8d3cc00           mov ecx, 0xccd3e8
// 00a3abe5  e9d624a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3abe0 { void m(); };
extern T_func_00a3abe0 G1_func_00a3abe0;
void func_00a3abe0()
{
    G1_func_00a3abe0.m();
}
