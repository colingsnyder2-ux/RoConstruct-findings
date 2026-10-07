// roc 2011-06 00a37530  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37530
//
// 00a37530  b91050cc00           mov ecx, 0xcc5010
// 00a37535  e906669dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37530 { void m(); };
extern T_func_00a37530 G1_func_00a37530;
void func_00a37530()
{
    G1_func_00a37530.m();
}
