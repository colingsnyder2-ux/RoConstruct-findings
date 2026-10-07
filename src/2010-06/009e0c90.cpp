// roc 2010-06 009e0c90  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0c90
//
// 009e0c90  b990e0c000           mov ecx, 0xc0e090
// 009e0c95  e9e698a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0c90 { void m(); };
extern T_func_009e0c90 G1_func_009e0c90;
void func_009e0c90()
{
    G1_func_009e0c90.m();
}
