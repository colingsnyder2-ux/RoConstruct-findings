// roc 2010-06 009e05a0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e05a0
//
// 009e05a0  b9904fc100           mov ecx, 0xc14f90
// 009e05a5  e9d69fa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e05a0 { void m(); };
extern T_func_009e05a0 G1_func_009e05a0;
void func_009e05a0()
{
    G1_func_009e05a0.m();
}
