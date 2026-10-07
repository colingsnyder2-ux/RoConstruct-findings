// roc 2010-06 009e0710  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0710
//
// 009e0710  b99038c100           mov ecx, 0xc13890
// 009e0715  e9669ea2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0710 { void m(); };
extern T_func_009e0710 G1_func_009e0710;
void func_009e0710()
{
    G1_func_009e0710.m();
}
