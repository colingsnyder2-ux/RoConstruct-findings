// roc 2011-06 00a3e4f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e4f0
//
// 00a3e4f0  b9d834cd00           mov ecx, 0xcd34d8
// 00a3e4f5  e916e0a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3e4f0 { void m(); };
extern T_func_00a3e4f0 G1_func_00a3e4f0;
void func_00a3e4f0()
{
    G1_func_00a3e4f0.m();
}
