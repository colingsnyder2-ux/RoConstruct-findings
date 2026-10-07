// roc 2010-06 009e07a0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e07a0
//
// 009e07a0  b9902fc100           mov ecx, 0xc12f90
// 009e07a5  e9d69da2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e07a0 { void m(); };
extern T_func_009e07a0 G1_func_009e07a0;
void func_009e07a0()
{
    G1_func_009e07a0.m();
}
