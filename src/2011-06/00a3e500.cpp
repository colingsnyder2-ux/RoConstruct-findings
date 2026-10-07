// roc 2011-06 00a3e500  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e500
//
// 00a3e500  b9d035cd00           mov ecx, 0xcd35d0
// 00a3e505  e906e0a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3e500 { void m(); };
extern T_func_00a3e500 G1_func_00a3e500;
void func_00a3e500()
{
    G1_func_00a3e500.m();
}
