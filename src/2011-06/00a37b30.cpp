// roc 2011-06 00a37b30  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37b30
//
// 00a37b30  b910ffcb00           mov ecx, 0xcbff10
// 00a37b35  e906609dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37b30 { void m(); };
extern T_func_00a37b30 G1_func_00a37b30;
void func_00a37b30()
{
    G1_func_00a37b30.m();
}
