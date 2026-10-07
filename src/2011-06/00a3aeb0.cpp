// roc 2011-06 00a3aeb0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3aeb0
//
// 00a3aeb0  b9f8dbcc00           mov ecx, 0xccdbf8
// 00a3aeb5  e90622a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3aeb0 { void m(); };
extern T_func_00a3aeb0 G1_func_00a3aeb0;
void func_00a3aeb0()
{
    G1_func_00a3aeb0.m();
}
