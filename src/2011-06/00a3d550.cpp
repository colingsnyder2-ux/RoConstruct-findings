// roc 2011-06 00a3d550  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d550
//
// 00a3d550  b9f020cd00           mov ecx, 0xcd20f0
// 00a3d555  e966fba6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3d550 { void m(); };
extern T_func_00a3d550 G1_func_00a3d550;
void func_00a3d550()
{
    G1_func_00a3d550.m();
}
