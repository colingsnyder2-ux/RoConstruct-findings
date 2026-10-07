// roc 2011-06 00a3a5e0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a5e0
//
// 00a3a5e0  b9d0cacc00           mov ecx, 0xcccad0
// 00a3a5e5  e9261fa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3a5e0 { void m(); };
extern T_func_00a3a5e0 G1_func_00a3a5e0;
void func_00a3a5e0()
{
    G1_func_00a3a5e0.m();
}
