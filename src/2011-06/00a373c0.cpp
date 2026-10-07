// roc 2011-06 00a373c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a373c0
//
// 00a373c0  b97863cc00           mov ecx, 0xcc6378
// 00a373c5  e976679dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a373c0 { void m(); };
extern T_func_00a373c0 G1_func_00a373c0;
void func_00a373c0()
{
    G1_func_00a373c0.m();
}
