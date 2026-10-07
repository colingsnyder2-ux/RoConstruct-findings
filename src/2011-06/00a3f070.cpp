// roc 2011-06 00a3f070  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f070
//
// 00a3f070  b96846cd00           mov ecx, 0xcd4668
// 00a3f075  e996d4a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f070 { void m(); };
extern T_func_00a3f070 G1_func_00a3f070;
void func_00a3f070()
{
    G1_func_00a3f070.m();
}
