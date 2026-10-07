// roc 2010-06 009e0940  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0940
//
// 009e0940  b99015c100           mov ecx, 0xc11590
// 009e0945  e9369ca2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0940 { void m(); };
extern T_func_009e0940 G1_func_009e0940;
void func_009e0940()
{
    G1_func_009e0940.m();
}
