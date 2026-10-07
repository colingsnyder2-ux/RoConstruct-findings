// roc 2011-06 00a39a00  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39a00
//
// 00a39a00  b970b8cc00           mov ecx, 0xccb870
// 00a39a05  e9466cc4ff           jmp 0x680650
// auto-matched from its assembly shape

struct T_func_00a39a00 { void m(); };
extern T_func_00a39a00 G1_func_00a39a00;
void func_00a39a00()
{
    G1_func_00a39a00.m();
}
