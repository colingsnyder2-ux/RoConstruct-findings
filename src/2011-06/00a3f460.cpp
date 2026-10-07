// roc 2011-06 00a3f460  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f460
//
// 00a3f460  b9784fcd00           mov ecx, 0xcd4f78
// 00a3f465  e9a6d0a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f460 { void m(); };
extern T_func_00a3f460 G1_func_00a3f460;
void func_00a3f460()
{
    G1_func_00a3f460.m();
}
