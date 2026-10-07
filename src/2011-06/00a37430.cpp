// roc 2011-06 00a37430  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37430
//
// 00a37430  b9905dcc00           mov ecx, 0xcc5d90
// 00a37435  e906679dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37430 { void m(); };
extern T_func_00a37430 G1_func_00a37430;
void func_00a37430()
{
    G1_func_00a37430.m();
}
