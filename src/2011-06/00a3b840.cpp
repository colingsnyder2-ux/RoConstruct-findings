// roc 2011-06 00a3b840  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b840
//
// 00a3b840  b948e7cc00           mov ecx, 0xcce748
// 00a3b845  e9c60ca7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b840 { void m(); };
extern T_func_00a3b840 G1_func_00a3b840;
void func_00a3b840()
{
    G1_func_00a3b840.m();
}
