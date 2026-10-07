// roc 2011-06 00a3d4f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d4f0
//
// 00a3d4f0  b9d81fcd00           mov ecx, 0xcd1fd8
// 00a3d4f5  e9c6fba6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3d4f0 { void m(); };
extern T_func_00a3d4f0 G1_func_00a3d4f0;
void func_00a3d4f0()
{
    G1_func_00a3d4f0.m();
}
