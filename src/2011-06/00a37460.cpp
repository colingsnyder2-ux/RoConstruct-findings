// roc 2011-06 00a37460  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37460
//
// 00a37460  b9085bcc00           mov ecx, 0xcc5b08
// 00a37465  e9d6669dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37460 { void m(); };
extern T_func_00a37460 G1_func_00a37460;
void func_00a37460()
{
    G1_func_00a37460.m();
}
