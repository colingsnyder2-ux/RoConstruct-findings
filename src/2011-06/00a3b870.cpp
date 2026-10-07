// roc 2011-06 00a3b870  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b870
//
// 00a3b870  b9d8e7cc00           mov ecx, 0xcce7d8
// 00a3b875  e9d64dc4ff           jmp 0x680650
// auto-matched from its assembly shape

struct T_func_00a3b870 { void m(); };
extern T_func_00a3b870 G1_func_00a3b870;
void func_00a3b870()
{
    G1_func_00a3b870.m();
}
