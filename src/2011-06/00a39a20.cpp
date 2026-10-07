// roc 2011-06 00a39a20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39a20
//
// 00a39a20  b9b0b8cc00           mov ecx, 0xccb8b0
// 00a39a25  e9e62aa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39a20 { void m(); };
extern T_func_00a39a20 G1_func_00a39a20;
void func_00a39a20()
{
    G1_func_00a39a20.m();
}
