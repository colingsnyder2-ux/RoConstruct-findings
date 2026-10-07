// roc 2011-06 00a33810  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33810
//
// 00a33810  b9f07dcb00           mov ecx, 0xcb7df0
// 00a33815  e926a39dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a33810 { void m(); };
extern T_func_00a33810 G1_func_00a33810;
void func_00a33810()
{
    G1_func_00a33810.m();
}
