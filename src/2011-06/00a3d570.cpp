// roc 2011-06 00a3d570  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d570
//
// 00a3d570  b98020cd00           mov ecx, 0xcd2080
// 00a3d575  e946fba6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3d570 { void m(); };
extern T_func_00a3d570 G1_func_00a3d570;
void func_00a3d570()
{
    G1_func_00a3d570.m();
}
