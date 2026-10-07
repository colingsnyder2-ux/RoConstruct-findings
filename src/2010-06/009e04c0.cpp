// roc 2010-06 009e04c0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e04c0
//
// 009e04c0  b9905dc100           mov ecx, 0xc15d90
// 009e04c5  e9b6a0a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e04c0 { void m(); };
extern T_func_009e04c0 G1_func_009e04c0;
void func_009e04c0()
{
    G1_func_009e04c0.m();
}
