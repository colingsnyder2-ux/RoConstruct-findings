// roc 2010-06 009e0610  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0610
//
// 009e0610  b99048c100           mov ecx, 0xc14890
// 009e0615  e9669fa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0610 { void m(); };
extern T_func_009e0610 G1_func_009e0610;
void func_009e0610()
{
    G1_func_009e0610.m();
}
