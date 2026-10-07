// roc 2010-06 009e0d60  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0d60
//
// 009e0d60  b990d3c000           mov ecx, 0xc0d390
// 009e0d65  e91698a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0d60 { void m(); };
extern T_func_009e0d60 G1_func_009e0d60;
void func_009e0d60()
{
    G1_func_009e0d60.m();
}
