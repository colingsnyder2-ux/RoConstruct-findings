// roc 2011-06 00a3e0f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e0f0
//
// 00a3e0f0  b9402fcd00           mov ecx, 0xcd2f40
// 00a3e0f5  e916e4a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3e0f0 { void m(); };
extern T_func_00a3e0f0 G1_func_00a3e0f0;
void func_00a3e0f0()
{
    G1_func_00a3e0f0.m();
}
