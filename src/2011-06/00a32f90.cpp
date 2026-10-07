// roc 2011-06 00a32f90  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32f90
//
// 00a32f90  b9b868cb00           mov ecx, 0xcb68b8
// 00a32f95  e926a1a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32f90 { void m(); };
extern T_func_00a32f90 G1_func_00a32f90;
void func_00a32f90()
{
    G1_func_00a32f90.m();
}
