// roc 2011-06 00a3d4c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d4c0
//
// 00a3d4c0  b9b81ecd00           mov ecx, 0xcd1eb8
// 00a3d4c5  e9f6fba6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3d4c0 { void m(); };
extern T_func_00a3d4c0 G1_func_00a3d4c0;
void func_00a3d4c0()
{
    G1_func_00a3d4c0.m();
}
