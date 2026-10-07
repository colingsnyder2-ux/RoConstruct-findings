// roc 2011-06 00a33360  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33360
//
// 00a33360  b94874cb00           mov ecx, 0xcb7448
// 00a33365  e9d6a79dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a33360 { void m(); };
extern T_func_00a33360 G1_func_00a33360;
void func_00a33360()
{
    G1_func_00a33360.m();
}
