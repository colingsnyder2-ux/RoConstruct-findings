// roc 2011-06 00a37310  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37310
//
// 00a37310  b9c06ccc00           mov ecx, 0xcc6cc0
// 00a37315  e926689dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37310 { void m(); };
extern T_func_00a37310 G1_func_00a37310;
void func_00a37310()
{
    G1_func_00a37310.m();
}
