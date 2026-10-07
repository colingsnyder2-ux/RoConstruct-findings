// roc 2011-06 00a37320  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37320
//
// 00a37320  b9e86bcc00           mov ecx, 0xcc6be8
// 00a37325  e916689dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37320 { void m(); };
extern T_func_00a37320 G1_func_00a37320;
void func_00a37320()
{
    G1_func_00a37320.m();
}
