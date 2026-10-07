// roc 2011-06 00a3c710  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c710
//
// 00a3c710  b97004cd00           mov ecx, 0xcd0470
// 00a3c715  e9f6fda6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c710 { void m(); };
extern T_func_00a3c710 G1_func_00a3c710;
void func_00a3c710()
{
    G1_func_00a3c710.m();
}
