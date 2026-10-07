// roc 2011-06 00a37400  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37400
//
// 00a37400  b91860cc00           mov ecx, 0xcc6018
// 00a37405  e936679dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37400 { void m(); };
extern T_func_00a37400 G1_func_00a37400;
void func_00a37400()
{
    G1_func_00a37400.m();
}
