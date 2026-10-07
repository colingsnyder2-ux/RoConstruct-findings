// roc 2011-06 00a37e20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37e20
//
// 00a37e20  b9d095cc00           mov ecx, 0xcc95d0
// 00a37e25  e956f0b8ff           jmp 0x5c6e80
// auto-matched from its assembly shape

struct T_func_00a37e20 { void m(); };
extern T_func_00a37e20 G1_func_00a37e20;
void func_00a37e20()
{
    G1_func_00a37e20.m();
}
