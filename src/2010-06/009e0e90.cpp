// roc 2010-06 009e0e90  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0e90
//
// 009e0e90  b9907fc100           mov ecx, 0xc17f90
// 009e0e95  e91618bdff           jmp 0x5b26b0
// auto-matched from its assembly shape

struct T_func_009e0e90 { void m(); };
extern T_func_009e0e90 G1_func_009e0e90;
void func_009e0e90()
{
    G1_func_009e0e90.m();
}
