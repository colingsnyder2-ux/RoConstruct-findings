// roc 2011-06 00a37bd0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37bd0
//
// 00a37bd0  b9a0f6cb00           mov ecx, 0xcbf6a0
// 00a37bd5  e9665f9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37bd0 { void m(); };
extern T_func_00a37bd0 G1_func_00a37bd0;
void func_00a37bd0()
{
    G1_func_00a37bd0.m();
}
