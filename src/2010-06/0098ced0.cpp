// roc 2010-06 0098ced0  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0098ced0
//
// 0098ced0  b93067c000           mov ecx, 0xc06730
// 0098ced5  e9e662b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0098ced0 { void m(); };
extern T_func_0098ced0 G1_func_0098ced0;
void func_0098ced0()
{
    G1_func_0098ced0.m();
}
