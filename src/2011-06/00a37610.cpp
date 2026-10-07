// roc 2011-06 00a37610  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37610
//
// 00a37610  b94044cc00           mov ecx, 0xcc4440
// 00a37615  e926659dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37610 { void m(); };
extern T_func_00a37610 G1_func_00a37610;
void func_00a37610()
{
    G1_func_00a37610.m();
}
