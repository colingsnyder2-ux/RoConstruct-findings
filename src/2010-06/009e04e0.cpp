// roc 2010-06 009e04e0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e04e0
//
// 009e04e0  b9905bc100           mov ecx, 0xc15b90
// 009e04e5  e996a0a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e04e0 { void m(); };
extern T_func_009e04e0 G1_func_009e04e0;
void func_009e04e0()
{
    G1_func_009e04e0.m();
}
