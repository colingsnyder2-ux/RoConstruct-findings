// roc 2011-06 00a37920  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37920
//
// 00a37920  b9e81acc00           mov ecx, 0xcc1ae8
// 00a37925  e916629dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37920 { void m(); };
extern T_func_00a37920 G1_func_00a37920;
void func_00a37920()
{
    G1_func_00a37920.m();
}
