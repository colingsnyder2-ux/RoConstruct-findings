// roc 2010-06 009e06c0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e06c0
//
// 009e06c0  b9903dc100           mov ecx, 0xc13d90
// 009e06c5  e9b69ea2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e06c0 { void m(); };
extern T_func_009e06c0 G1_func_009e06c0;
void func_009e06c0()
{
    G1_func_009e06c0.m();
}
