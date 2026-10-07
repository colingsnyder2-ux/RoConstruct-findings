// roc 2011-06 00a39750  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39750
//
// 00a39750  b968b2cc00           mov ecx, 0xccb268
// 00a39755  e96639a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a39750 { void m(); };
extern T_func_00a39750 G1_func_00a39750;
void func_00a39750()
{
    G1_func_00a39750.m();
}
