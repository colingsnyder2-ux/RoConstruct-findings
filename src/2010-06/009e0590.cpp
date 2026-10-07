// roc 2010-06 009e0590  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0590
//
// 009e0590  b99050c100           mov ecx, 0xc15090
// 009e0595  e9e69fa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0590 { void m(); };
extern T_func_009e0590 G1_func_009e0590;
void func_009e0590()
{
    G1_func_009e0590.m();
}
