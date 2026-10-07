// roc 2011-06 00a3d530  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d530
//
// 00a3d530  b9681fcd00           mov ecx, 0xcd1f68
// 00a3d535  e986fba6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3d530 { void m(); };
extern T_func_00a3d530 G1_func_00a3d530;
void func_00a3d530()
{
    G1_func_00a3d530.m();
}
