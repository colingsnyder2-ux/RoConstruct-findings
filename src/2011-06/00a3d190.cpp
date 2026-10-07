// roc 2011-06 00a3d190  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d190
//
// 00a3d190  b9241acd00           mov ecx, 0xcd1a24
// 00a3d195  e976f3a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3d190 { void m(); };
extern T_func_00a3d190 G1_func_00a3d190;
void func_00a3d190()
{
    G1_func_00a3d190.m();
}
