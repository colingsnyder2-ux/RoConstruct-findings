// roc 2010-06 009e08e0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e08e0
//
// 009e08e0  b9901bc100           mov ecx, 0xc11b90
// 009e08e5  e9969ca2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e08e0 { void m(); };
extern T_func_009e08e0 G1_func_009e08e0;
void func_009e08e0()
{
    G1_func_009e08e0.m();
}
