// roc 2011-06 00a3b860  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b860
//
// 00a3b860  b9f0e9cc00           mov ecx, 0xcce9f0
// 00a3b865  e9e64dc4ff           jmp 0x680650
// auto-matched from its assembly shape

struct T_func_00a3b860 { void m(); };
extern T_func_00a3b860 G1_func_00a3b860;
void func_00a3b860()
{
    G1_func_00a3b860.m();
}
