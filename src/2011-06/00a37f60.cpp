// roc 2011-06 00a37f60  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37f60
//
// 00a37f60  b9b088cc00           mov ecx, 0xcc88b0
// 00a37f65  e9d6bcb8ff           jmp 0x5c3c40
// auto-matched from its assembly shape

struct T_func_00a37f60 { void m(); };
extern T_func_00a37f60 G1_func_00a37f60;
void func_00a37f60()
{
    G1_func_00a37f60.m();
}
