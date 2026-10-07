// roc 2011-06 00a3f330  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f330
//
// 00a3f330  b9e84dcd00           mov ecx, 0xcd4de8
// 00a3f335  e9d6d1a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f330 { void m(); };
extern T_func_00a3f330 G1_func_00a3f330;
void func_00a3f330()
{
    G1_func_00a3f330.m();
}
