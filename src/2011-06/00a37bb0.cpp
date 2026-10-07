// roc 2011-06 00a37bb0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37bb0
//
// 00a37bb0  b950f8cb00           mov ecx, 0xcbf850
// 00a37bb5  e9865f9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37bb0 { void m(); };
extern T_func_00a37bb0 G1_func_00a37bb0;
void func_00a37bb0()
{
    G1_func_00a37bb0.m();
}
