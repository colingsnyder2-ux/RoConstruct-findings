// roc 2010-06 009e0900  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0900
//
// 009e0900  b99019c100           mov ecx, 0xc11990
// 009e0905  e9769ca2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0900 { void m(); };
extern T_func_009e0900 G1_func_009e0900;
void func_009e0900()
{
    G1_func_009e0900.m();
}
