// roc 2011-06 00a37330  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37330
//
// 00a37330  b9106bcc00           mov ecx, 0xcc6b10
// 00a37335  e906689dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37330 { void m(); };
extern T_func_00a37330 G1_func_00a37330;
void func_00a37330()
{
    G1_func_00a37330.m();
}
