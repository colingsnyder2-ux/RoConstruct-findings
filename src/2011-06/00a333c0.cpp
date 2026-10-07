// roc 2011-06 00a333c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a333c0
//
// 00a333c0  b9386fcb00           mov ecx, 0xcb6f38
// 00a333c5  e976a79dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a333c0 { void m(); };
extern T_func_00a333c0 G1_func_00a333c0;
void func_00a333c0()
{
    G1_func_00a333c0.m();
}
