// roc 2011-06 00a37f20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37f20
//
// 00a37f20  b9508bcc00           mov ecx, 0xcc8b50
// 00a37f25  e926c5b8ff           jmp 0x5c4450
// auto-matched from its assembly shape

struct T_func_00a37f20 { void m(); };
extern T_func_00a37f20 G1_func_00a37f20;
void func_00a37f20()
{
    G1_func_00a37f20.m();
}
