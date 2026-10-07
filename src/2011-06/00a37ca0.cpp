// roc 2011-06 00a37ca0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37ca0
//
// 00a37ca0  b9a8ebcb00           mov ecx, 0xcbeba8
// 00a37ca5  e9965e9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37ca0 { void m(); };
extern T_func_00a37ca0 G1_func_00a37ca0;
void func_00a37ca0()
{
    G1_func_00a37ca0.m();
}
