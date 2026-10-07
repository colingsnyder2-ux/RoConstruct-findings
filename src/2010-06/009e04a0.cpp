// roc 2010-06 009e04a0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e04a0
//
// 009e04a0  b9905fc100           mov ecx, 0xc15f90
// 009e04a5  e9d6a0a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e04a0 { void m(); };
extern T_func_009e04a0 G1_func_009e04a0;
void func_009e04a0()
{
    G1_func_009e04a0.m();
}
