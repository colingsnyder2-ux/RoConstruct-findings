// roc 2011-06 00a39da0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39da0
//
// 00a39da0  b988c1cc00           mov ecx, 0xccc188
// 00a39da5  e96627a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39da0 { void m(); };
extern T_func_00a39da0 G1_func_00a39da0;
void func_00a39da0()
{
    G1_func_00a39da0.m();
}
