// roc 2011-06 00a3d920  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d920
//
// 00a3d920  b9d826cd00           mov ecx, 0xcd26d8
// 00a3d925  e996f7a6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3d920 { void m(); };
extern T_func_00a3d920 G1_func_00a3d920;
void func_00a3d920()
{
    G1_func_00a3d920.m();
}
