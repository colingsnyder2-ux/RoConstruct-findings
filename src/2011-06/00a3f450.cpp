// roc 2011-06 00a3f450  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f450
//
// 00a3f450  b9484fcd00           mov ecx, 0xcd4f48
// 00a3f455  e9b6d0a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f450 { void m(); };
extern T_func_00a3f450 G1_func_00a3f450;
void func_00a3f450()
{
    G1_func_00a3f450.m();
}
