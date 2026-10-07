// roc 2011-06 00a3b950  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b950
//
// 00a3b950  b920f2cc00           mov ecx, 0xccf220
// 00a3b955  e96617a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3b950 { void m(); };
extern T_func_00a3b950 G1_func_00a3b950;
void func_00a3b950()
{
    G1_func_00a3b950.m();
}
