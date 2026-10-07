// roc 2011-06 00a315c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a315c0
//
// 00a315c0  b9482acb00           mov ecx, 0xcb2a48
// 00a315c5  e976c59dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a315c0 { void m(); };
extern T_func_00a315c0 G1_func_00a315c0;
void func_00a315c0()
{
    G1_func_00a315c0.m();
}
