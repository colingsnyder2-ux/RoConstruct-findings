// roc 2011-06 00a333a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a333a0
//
// 00a333a0  b9e870cb00           mov ecx, 0xcb70e8
// 00a333a5  e996a79dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a333a0 { void m(); };
extern T_func_00a333a0 G1_func_00a333a0;
void func_00a333a0()
{
    G1_func_00a333a0.m();
}
