// roc 2011-06 00a373a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a373a0
//
// 00a373a0  b92865cc00           mov ecx, 0xcc6528
// 00a373a5  e996679dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a373a0 { void m(); };
extern T_func_00a373a0 G1_func_00a373a0;
void func_00a373a0()
{
    G1_func_00a373a0.m();
}
