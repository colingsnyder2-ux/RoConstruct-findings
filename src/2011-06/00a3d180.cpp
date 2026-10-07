// roc 2011-06 00a3d180  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d180
//
// 00a3d180  b9541acd00           mov ecx, 0xcd1a54
// 00a3d185  e986f3a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3d180 { void m(); };
extern T_func_00a3d180 G1_func_00a3d180;
void func_00a3d180()
{
    G1_func_00a3d180.m();
}
