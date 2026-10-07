// roc 2010-06 009e04d0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e04d0
//
// 009e04d0  b9905cc100           mov ecx, 0xc15c90
// 009e04d5  e9a6a0a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e04d0 { void m(); };
extern T_func_009e04d0 G1_func_009e04d0;
void func_009e04d0()
{
    G1_func_009e04d0.m();
}
