// roc 2011-06 00a333d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a333d0
//
// 00a333d0  b9606ecb00           mov ecx, 0xcb6e60
// 00a333d5  e966a79dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a333d0 { void m(); };
extern T_func_00a333d0 G1_func_00a333d0;
void func_00a333d0()
{
    G1_func_00a333d0.m();
}
