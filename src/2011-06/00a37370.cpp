// roc 2011-06 00a37370  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37370
//
// 00a37370  b9b067cc00           mov ecx, 0xcc67b0
// 00a37375  e9c6679dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37370 { void m(); };
extern T_func_00a37370 G1_func_00a37370;
void func_00a37370()
{
    G1_func_00a37370.m();
}
