// roc 2011-06 00a37890  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37890
//
// 00a37890  b98022cc00           mov ecx, 0xcc2280
// 00a37895  e9a6629dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37890 { void m(); };
extern T_func_00a37890 G1_func_00a37890;
void func_00a37890()
{
    G1_func_00a37890.m();
}
