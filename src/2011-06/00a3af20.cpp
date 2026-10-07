// roc 2011-06 00a3af20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3af20
//
// 00a3af20  b930ddcc00           mov ecx, 0xccdd30
// 00a3af25  e9162c9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a3af20 { void m(); };
extern T_func_00a3af20 G1_func_00a3af20;
void func_00a3af20()
{
    G1_func_00a3af20.m();
}
