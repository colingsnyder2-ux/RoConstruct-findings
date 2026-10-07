// roc 2011-06 00a37f90  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37f90
//
// 00a37f90  b9b886cc00           mov ecx, 0xcc86b8
// 00a37f95  e996b4b8ff           jmp 0x5c3430
// auto-matched from its assembly shape

struct T_func_00a37f90 { void m(); };
extern T_func_00a37f90 G1_func_00a37f90;
void func_00a37f90()
{
    G1_func_00a37f90.m();
}
