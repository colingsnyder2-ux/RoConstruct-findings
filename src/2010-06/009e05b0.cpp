// roc 2010-06 009e05b0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e05b0
//
// 009e05b0  b9904ec100           mov ecx, 0xc14e90
// 009e05b5  e9c69fa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e05b0 { void m(); };
extern T_func_009e05b0 G1_func_009e05b0;
void func_009e05b0()
{
    G1_func_009e05b0.m();
}
