// roc 2010-06 009e0f90  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0f90
//
// 009e0f90  b99070c100           mov ecx, 0xc17090
// 009e0f95  e956e9bcff           jmp 0x5af8f0
// auto-matched from its assembly shape

struct T_func_009e0f90 { void m(); };
extern T_func_009e0f90 G1_func_009e0f90;
void func_009e0f90()
{
    G1_func_009e0f90.m();
}
