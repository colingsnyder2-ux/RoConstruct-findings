// roc 2011-06 00a3ac40  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ac40
//
// 00a3ac40  b9c8d7cc00           mov ecx, 0xccd7c8
// 00a3ac45  e9f62e9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a3ac40 { void m(); };
extern T_func_00a3ac40 G1_func_00a3ac40;
void func_00a3ac40()
{
    G1_func_00a3ac40.m();
}
