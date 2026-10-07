// roc 2011-06 00a3f440  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f440
//
// 00a3f440  b9e84ecd00           mov ecx, 0xcd4ee8
// 00a3f445  e9c6d0a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f440 { void m(); };
extern T_func_00a3f440 G1_func_00a3f440;
void func_00a3f440()
{
    G1_func_00a3f440.m();
}
