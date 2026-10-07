// roc 2010-06 009e04b0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e04b0
//
// 009e04b0  b9905ec100           mov ecx, 0xc15e90
// 009e04b5  e9c6a0a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e04b0 { void m(); };
extern T_func_009e04b0 G1_func_009e04b0;
void func_009e04b0()
{
    G1_func_009e04b0.m();
}
