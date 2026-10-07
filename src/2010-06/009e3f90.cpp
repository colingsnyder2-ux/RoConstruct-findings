// roc 2010-06 009e3f90  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3f90
//
// 009e3f90  b9e0c0c100           mov ecx, 0xc1c0e0
// 009e3f95  e9d625bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e3f90 { void m(); };
extern T_func_009e3f90 G1_func_009e3f90;
void func_009e3f90()
{
    G1_func_009e3f90.m();
}
