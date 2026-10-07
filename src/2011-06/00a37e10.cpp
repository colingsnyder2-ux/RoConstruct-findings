// roc 2011-06 00a37e10  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37e10
//
// 00a37e10  b97896cc00           mov ecx, 0xcc9678
// 00a37e15  e916f3b8ff           jmp 0x5c7130
// auto-matched from its assembly shape

struct T_func_00a37e10 { void m(); };
extern T_func_00a37e10 G1_func_00a37e10;
void func_00a37e10()
{
    G1_func_00a37e10.m();
}
