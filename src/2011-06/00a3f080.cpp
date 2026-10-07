// roc 2011-06 00a3f080  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f080
//
// 00a3f080  b9f845cd00           mov ecx, 0xcd45f8
// 00a3f085  e986d4a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f080 { void m(); };
extern T_func_00a3f080 G1_func_00a3f080;
void func_00a3f080()
{
    G1_func_00a3f080.m();
}
