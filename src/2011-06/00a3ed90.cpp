// roc 2011-06 00a3ed90  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ed90
//
// 00a3ed90  b95842cd00           mov ecx, 0xcd4258
// 00a3ed95  e926e3a6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3ed90 { void m(); };
extern T_func_00a3ed90 G1_func_00a3ed90;
void func_00a3ed90()
{
    G1_func_00a3ed90.m();
}
