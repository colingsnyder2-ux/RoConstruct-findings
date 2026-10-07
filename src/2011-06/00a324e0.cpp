// roc 2011-06 00a324e0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a324e0
//
// 00a324e0  b97855cb00           mov ecx, 0xcb5578
// 00a324e5  e956b69dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a324e0 { void m(); };
extern T_func_00a324e0 G1_func_00a324e0;
void func_00a324e0()
{
    G1_func_00a324e0.m();
}
