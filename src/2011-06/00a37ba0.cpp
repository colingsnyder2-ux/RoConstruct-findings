// roc 2011-06 00a37ba0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37ba0
//
// 00a37ba0  b928f9cb00           mov ecx, 0xcbf928
// 00a37ba5  e9965f9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37ba0 { void m(); };
extern T_func_00a37ba0 G1_func_00a37ba0;
void func_00a37ba0()
{
    G1_func_00a37ba0.m();
}
