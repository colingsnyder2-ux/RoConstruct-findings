// roc 2011-06 00a37e60  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37e60
//
// 00a37e60  b93093cc00           mov ecx, 0xcc9330
// 00a37e65  e956e5b8ff           jmp 0x5c63c0
// auto-matched from its assembly shape

struct T_func_00a37e60 { void m(); };
extern T_func_00a37e60 G1_func_00a37e60;
void func_00a37e60()
{
    G1_func_00a37e60.m();
}
