// roc 2011-06 00a37500  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37500
//
// 00a37500  b99852cc00           mov ecx, 0xcc5298
// 00a37505  e936669dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37500 { void m(); };
extern T_func_00a37500 G1_func_00a37500;
void func_00a37500()
{
    G1_func_00a37500.m();
}
