// roc 2011-06 00a35030  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35030
//
// 00a35030  b9c8bbcb00           mov ecx, 0xcbbbc8
// 00a35035  e98680a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a35030 { void m(); };
extern T_func_00a35030 G1_func_00a35030;
void func_00a35030()
{
    G1_func_00a35030.m();
}
