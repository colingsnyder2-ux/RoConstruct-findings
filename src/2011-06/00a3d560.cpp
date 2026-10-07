// roc 2011-06 00a3d560  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d560
//
// 00a3d560  b94820cd00           mov ecx, 0xcd2048
// 00a3d565  e956fba6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3d560 { void m(); };
extern T_func_00a3d560 G1_func_00a3d560;
void func_00a3d560()
{
    G1_func_00a3d560.m();
}
