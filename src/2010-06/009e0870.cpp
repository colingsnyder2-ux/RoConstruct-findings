// roc 2010-06 009e0870  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0870
//
// 009e0870  b99022c100           mov ecx, 0xc12290
// 009e0875  e9069da2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0870 { void m(); };
extern T_func_009e0870 G1_func_009e0870;
void func_009e0870()
{
    G1_func_009e0870.m();
}
