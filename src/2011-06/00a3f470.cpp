// roc 2011-06 00a3f470  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f470
//
// 00a3f470  b9a84fcd00           mov ecx, 0xcd4fa8
// 00a3f475  e996d0a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f470 { void m(); };
extern T_func_00a3f470 G1_func_00a3f470;
void func_00a3f470()
{
    G1_func_00a3f470.m();
}
