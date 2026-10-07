// roc 2011-06 00a37780  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37780
//
// 00a37780  b9d830cc00           mov ecx, 0xcc30d8
// 00a37785  e9b6639dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37780 { void m(); };
extern T_func_00a37780 G1_func_00a37780;
void func_00a37780()
{
    G1_func_00a37780.m();
}
