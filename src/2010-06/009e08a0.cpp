// roc 2010-06 009e08a0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e08a0
//
// 009e08a0  b9901fc100           mov ecx, 0xc11f90
// 009e08a5  e9d69ca2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e08a0 { void m(); };
extern T_func_009e08a0 G1_func_009e08a0;
void func_009e08a0()
{
    G1_func_009e08a0.m();
}
