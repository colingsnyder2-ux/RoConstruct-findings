// roc 2011-06 00a37820  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37820
//
// 00a37820  b96828cc00           mov ecx, 0xcc2868
// 00a37825  e916639dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37820 { void m(); };
extern T_func_00a37820 G1_func_00a37820;
void func_00a37820()
{
    G1_func_00a37820.m();
}
