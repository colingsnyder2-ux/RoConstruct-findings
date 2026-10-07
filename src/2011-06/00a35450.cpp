// roc 2011-06 00a35450  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35450
//
// 00a35450  b960d4cb00           mov ecx, 0xcbd460
// 00a35455  e9e6869dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a35450 { void m(); };
extern T_func_00a35450 G1_func_00a35450;
void func_00a35450()
{
    G1_func_00a35450.m();
}
