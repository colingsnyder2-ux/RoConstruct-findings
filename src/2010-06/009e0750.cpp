// roc 2010-06 009e0750  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0750
//
// 009e0750  b99034c100           mov ecx, 0xc13490
// 009e0755  e9269ea2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0750 { void m(); };
extern T_func_009e0750 G1_func_009e0750;
void func_009e0750()
{
    G1_func_009e0750.m();
}
