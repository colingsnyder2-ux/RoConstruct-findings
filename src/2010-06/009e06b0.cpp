// roc 2010-06 009e06b0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e06b0
//
// 009e06b0  b9903ec100           mov ecx, 0xc13e90
// 009e06b5  e9c69ea2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e06b0 { void m(); };
extern T_func_009e06b0 G1_func_009e06b0;
void func_009e06b0()
{
    G1_func_009e06b0.m();
}
