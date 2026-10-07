// roc 2010-06 009e06a0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e06a0
//
// 009e06a0  b9903fc100           mov ecx, 0xc13f90
// 009e06a5  e9d69ea2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e06a0 { void m(); };
extern T_func_009e06a0 G1_func_009e06a0;
void func_009e06a0()
{
    G1_func_009e06a0.m();
}
