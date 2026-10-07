// roc 2010-06 009e0930  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0930
//
// 009e0930  b99016c100           mov ecx, 0xc11690
// 009e0935  e9469ca2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0930 { void m(); };
extern T_func_009e0930 G1_func_009e0930;
void func_009e0930()
{
    G1_func_009e0930.m();
}
