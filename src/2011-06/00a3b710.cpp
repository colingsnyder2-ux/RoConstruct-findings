// roc 2011-06 00a3b710  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b710
//
// 00a3b710  b9b8e8cc00           mov ecx, 0xcce8b8
// 00a3b715  e9f60da7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b710 { void m(); };
extern T_func_00a3b710 G1_func_00a3b710;
void func_00a3b710()
{
    G1_func_00a3b710.m();
}
