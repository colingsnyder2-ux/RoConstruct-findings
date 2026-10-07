// roc 2011-06 00a38030  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a38030
//
// 00a38030  b92880cc00           mov ecx, 0xcc8028
// 00a38035  e9d697b8ff           jmp 0x5c1810
// auto-matched from its assembly shape

struct T_func_00a38030 { void m(); };
extern T_func_00a38030 G1_func_00a38030;
void func_00a38030()
{
    G1_func_00a38030.m();
}
