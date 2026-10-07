// roc 2011-06 00a3d900  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d900
//
// 00a3d900  b9e025cd00           mov ecx, 0xcd25e0
// 00a3d905  e906eca6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3d900 { void m(); };
extern T_func_00a3d900 G1_func_00a3d900;
void func_00a3d900()
{
    G1_func_00a3d900.m();
}
