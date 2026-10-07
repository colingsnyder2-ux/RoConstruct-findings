// roc 2011-06 00a37ae0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37ae0
//
// 00a37ae0  b94803cc00           mov ecx, 0xcc0348
// 00a37ae5  e956609dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37ae0 { void m(); };
extern T_func_00a37ae0 G1_func_00a37ae0;
void func_00a37ae0()
{
    G1_func_00a37ae0.m();
}
