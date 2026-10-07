// roc 2011-06 00a3f310  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f310
//
// 00a3f310  b9484dcd00           mov ecx, 0xcd4d48
// 00a3f315  e9a6dda6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3f310 { void m(); };
extern T_func_00a3f310 G1_func_00a3f310;
void func_00a3f310()
{
    G1_func_00a3f310.m();
}
