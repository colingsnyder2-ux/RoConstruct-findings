// roc 2009-06 00898b10  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898b10
//
// 00898b10  b93892a400           mov ecx, 0xa49238
// 00898b15  e9e6fed4ff           jmp 0x5e8a00
// auto-matched from its assembly shape

struct T_func_00898b10 { void m(); };
extern T_func_00898b10 G1_func_00898b10;
void func_00898b10()
{
    G1_func_00898b10.m();
}
