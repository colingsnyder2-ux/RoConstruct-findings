// roc 2011-06 00a3aec0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3aec0
//
// 00a3aec0  b990dccc00           mov ecx, 0xccdc90
// 00a3aec5  e9f621a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3aec0 { void m(); };
extern T_func_00a3aec0 G1_func_00a3aec0;
void func_00a3aec0()
{
    G1_func_00a3aec0.m();
}
