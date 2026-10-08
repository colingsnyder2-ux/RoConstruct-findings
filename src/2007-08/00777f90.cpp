// roc 2007-08 00777f90  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777f90
//
// 00777f90  b9b8d08b00           mov ecx, 0x8bd0b8
// 00777f95  e996cdd7ff           jmp 0x4f4d30
// auto-matched from its assembly shape

struct T_func_00777f90 { void m(); };
extern T_func_00777f90 G1_func_00777f90;
void func_00777f90()
{
    G1_func_00777f90.m();
}
