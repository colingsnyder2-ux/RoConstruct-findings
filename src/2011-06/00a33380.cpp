// roc 2011-06 00a33380  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33380
//
// 00a33380  b99872cb00           mov ecx, 0xcb7298
// 00a33385  e9b6a79dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a33380 { void m(); };
extern T_func_00a33380 G1_func_00a33380;
void func_00a33380()
{
    G1_func_00a33380.m();
}
