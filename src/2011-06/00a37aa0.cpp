// roc 2011-06 00a37aa0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37aa0
//
// 00a37aa0  b9a806cc00           mov ecx, 0xcc06a8
// 00a37aa5  e996609dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37aa0 { void m(); };
extern T_func_00a37aa0 G1_func_00a37aa0;
void func_00a37aa0()
{
    G1_func_00a37aa0.m();
}
