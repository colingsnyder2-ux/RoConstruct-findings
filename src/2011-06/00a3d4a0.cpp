// roc 2011-06 00a3d4a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d4a0
//
// 00a3d4a0  b9401ecd00           mov ecx, 0xcd1e40
// 00a3d4a5  e966f0a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3d4a0 { void m(); };
extern T_func_00a3d4a0 G1_func_00a3d4a0;
void func_00a3d4a0()
{
    G1_func_00a3d4a0.m();
}
