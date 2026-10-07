// roc 2011-06 00a37830  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37830
//
// 00a37830  b99027cc00           mov ecx, 0xcc2790
// 00a37835  e906639dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37830 { void m(); };
extern T_func_00a37830 G1_func_00a37830;
void func_00a37830()
{
    G1_func_00a37830.m();
}
