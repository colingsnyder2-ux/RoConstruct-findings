// roc 2011-06 00a39f20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39f20
//
// 00a39f20  b980c2cc00           mov ecx, 0xccc280
// 00a39f25  e9e625a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39f20 { void m(); };
extern T_func_00a39f20 G1_func_00a39f20;
void func_00a39f20()
{
    G1_func_00a39f20.m();
}
