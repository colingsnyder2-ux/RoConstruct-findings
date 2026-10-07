// roc 2010-06 009e05c0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e05c0
//
// 009e05c0  b9904dc100           mov ecx, 0xc14d90
// 009e05c5  e9b69fa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e05c0 { void m(); };
extern T_func_009e05c0 G1_func_009e05c0;
void func_009e05c0()
{
    G1_func_009e05c0.m();
}
