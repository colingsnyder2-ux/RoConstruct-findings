// roc 2009-06 00894f90  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894f90
//
// 00894f90  b9f8d3a300           mov ecx, 0xa3d3f8
// 00894f95  e9c686c1ff           jmp 0x4ad660
// auto-matched from its assembly shape

struct T_func_00894f90 { void m(); };
extern T_func_00894f90 G1_func_00894f90;
void func_00894f90()
{
    G1_func_00894f90.m();
}
