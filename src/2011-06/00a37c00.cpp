// roc 2011-06 00a37c00  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37c00
//
// 00a37c00  b918f4cb00           mov ecx, 0xcbf418
// 00a37c05  e9365f9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37c00 { void m(); };
extern T_func_00a37c00 G1_func_00a37c00;
void func_00a37c00()
{
    G1_func_00a37c00.m();
}
