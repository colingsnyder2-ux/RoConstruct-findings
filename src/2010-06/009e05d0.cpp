// roc 2010-06 009e05d0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e05d0
//
// 009e05d0  b9904cc100           mov ecx, 0xc14c90
// 009e05d5  e9a69fa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e05d0 { void m(); };
extern T_func_009e05d0 G1_func_009e05d0;
void func_009e05d0()
{
    G1_func_009e05d0.m();
}
