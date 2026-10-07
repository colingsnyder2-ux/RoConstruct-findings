// roc 2010-06 009e04f0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e04f0
//
// 009e04f0  b9905ac100           mov ecx, 0xc15a90
// 009e04f5  e986a0a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e04f0 { void m(); };
extern T_func_009e04f0 G1_func_009e04f0;
void func_009e04f0()
{
    G1_func_009e04f0.m();
}
