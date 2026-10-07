// roc 2009-06 00893ba0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893ba0
//
// 00893ba0  b93898a300           mov ecx, 0xa39838
// 00893ba5  e96667b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00893ba0 { void m(); };
extern T_func_00893ba0 G1_func_00893ba0;
void func_00893ba0()
{
    G1_func_00893ba0.m();
}
