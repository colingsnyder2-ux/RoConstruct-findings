// roc 2011-06 00a3d4d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d4d0
//
// 00a3d4d0  b9901ecd00           mov ecx, 0xcd1e90
// 00a3d4d5  e936f0a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3d4d0 { void m(); };
extern T_func_00a3d4d0 G1_func_00a3d4d0;
void func_00a3d4d0()
{
    G1_func_00a3d4d0.m();
}
