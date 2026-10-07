// roc 2010-06 009e0980  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0980
//
// 009e0980  b99011c100           mov ecx, 0xc11190
// 009e0985  e9f69ba2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0980 { void m(); };
extern T_func_009e0980 G1_func_009e0980;
void func_009e0980()
{
    G1_func_009e0980.m();
}
