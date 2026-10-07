// roc 2011-06 00a37e70  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37e70
//
// 00a37e70  b98892cc00           mov ecx, 0xcc9288
// 00a37e75  e946e2b8ff           jmp 0x5c60c0
// auto-matched from its assembly shape

struct T_func_00a37e70 { void m(); };
extern T_func_00a37e70 G1_func_00a37e70;
void func_00a37e70()
{
    G1_func_00a37e70.m();
}
