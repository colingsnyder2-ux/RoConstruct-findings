// roc 2010-06 009e06d0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e06d0
//
// 009e06d0  b9903cc100           mov ecx, 0xc13c90
// 009e06d5  e9a69ea2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e06d0 { void m(); };
extern T_func_009e06d0 G1_func_009e06d0;
void func_009e06d0()
{
    G1_func_009e06d0.m();
}
