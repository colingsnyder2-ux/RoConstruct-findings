// roc 2011-06 00a3adf0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3adf0
//
// 00a3adf0  b9c4dacc00           mov ecx, 0xccdac4
// 00a3adf5  e91617a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3adf0 { void m(); };
extern T_func_00a3adf0 G1_func_00a3adf0;
void func_00a3adf0()
{
    G1_func_00a3adf0.m();
}
