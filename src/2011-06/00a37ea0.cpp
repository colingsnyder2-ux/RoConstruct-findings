// roc 2011-06 00a37ea0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37ea0
//
// 00a37ea0  b99090cc00           mov ecx, 0xcc9090
// 00a37ea5  e916d9b8ff           jmp 0x5c57c0
// auto-matched from its assembly shape

struct T_func_00a37ea0 { void m(); };
extern T_func_00a37ea0 G1_func_00a37ea0;
void func_00a37ea0()
{
    G1_func_00a37ea0.m();
}
