// roc 2011-06 00a333b0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a333b0
//
// 00a333b0  b91070cb00           mov ecx, 0xcb7010
// 00a333b5  e986a79dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a333b0 { void m(); };
extern T_func_00a333b0 G1_func_00a333b0;
void func_00a333b0()
{
    G1_func_00a333b0.m();
}
