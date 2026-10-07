// roc 2011-06 00a32550  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32550
//
// 00a32550  b99060cb00           mov ecx, 0xcb6090
// 00a32555  e966aba7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32550 { void m(); };
extern T_func_00a32550 G1_func_00a32550;
void func_00a32550()
{
    G1_func_00a32550.m();
}
