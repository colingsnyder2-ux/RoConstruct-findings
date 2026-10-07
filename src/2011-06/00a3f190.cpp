// roc 2011-06 00a3f190  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f190
//
// 00a3f190  b98c49cd00           mov ecx, 0xcd498c
// 00a3f195  e976d3a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f190 { void m(); };
extern T_func_00a3f190 G1_func_00a3f190;
void func_00a3f190()
{
    G1_func_00a3f190.m();
}
