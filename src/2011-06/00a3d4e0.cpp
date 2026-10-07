// roc 2011-06 00a3d4e0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d4e0
//
// 00a3d4e0  b9b820cd00           mov ecx, 0xcd20b8
// 00a3d4e5  e9d6fba6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3d4e0 { void m(); };
extern T_func_00a3d4e0 G1_func_00a3d4e0;
void func_00a3d4e0()
{
    G1_func_00a3d4e0.m();
}
