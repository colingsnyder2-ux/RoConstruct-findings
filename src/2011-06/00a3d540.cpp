// roc 2011-06 00a3d540  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d540
//
// 00a3d540  b9301fcd00           mov ecx, 0xcd1f30
// 00a3d545  e976fba6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3d540 { void m(); };
extern T_func_00a3d540 G1_func_00a3d540;
void func_00a3d540()
{
    G1_func_00a3d540.m();
}
