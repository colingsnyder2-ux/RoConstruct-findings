// roc 2011-06 00a3c6f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c6f0
//
// 00a3c6f0  b96003cd00           mov ecx, 0xcd0360
// 00a3c6f5  e916fea6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c6f0 { void m(); };
extern T_func_00a3c6f0 G1_func_00a3c6f0;
void func_00a3c6f0()
{
    G1_func_00a3c6f0.m();
}
