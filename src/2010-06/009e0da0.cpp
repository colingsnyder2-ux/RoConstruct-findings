// roc 2010-06 009e0da0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0da0
//
// 009e0da0  b990cfc000           mov ecx, 0xc0cf90
// 009e0da5  e9d697a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0da0 { void m(); };
extern T_func_009e0da0 G1_func_009e0da0;
void func_009e0da0()
{
    G1_func_009e0da0.m();
}
