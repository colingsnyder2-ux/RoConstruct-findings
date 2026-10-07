// roc 2010-06 009e08b0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e08b0
//
// 009e08b0  b9901ec100           mov ecx, 0xc11e90
// 009e08b5  e9c69ca2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e08b0 { void m(); };
extern T_func_009e08b0 G1_func_009e08b0;
void func_009e08b0()
{
    G1_func_009e08b0.m();
}
