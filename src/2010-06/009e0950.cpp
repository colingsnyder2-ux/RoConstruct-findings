// roc 2010-06 009e0950  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0950
//
// 009e0950  b99014c100           mov ecx, 0xc11490
// 009e0955  e9269ca2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0950 { void m(); };
extern T_func_009e0950 G1_func_009e0950;
void func_009e0950()
{
    G1_func_009e0950.m();
}
