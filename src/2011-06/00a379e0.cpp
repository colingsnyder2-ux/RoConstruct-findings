// roc 2011-06 00a379e0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a379e0
//
// 00a379e0  b9c810cc00           mov ecx, 0xcc10c8
// 00a379e5  e956619dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a379e0 { void m(); };
extern T_func_00a379e0 G1_func_00a379e0;
void func_00a379e0()
{
    G1_func_00a379e0.m();
}
