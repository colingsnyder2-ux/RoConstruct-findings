// roc 2011-06 00a37a20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37a20
//
// 00a37a20  b9680dcc00           mov ecx, 0xcc0d68
// 00a37a25  e916619dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37a20 { void m(); };
extern T_func_00a37a20 G1_func_00a37a20;
void func_00a37a20()
{
    G1_func_00a37a20.m();
}
