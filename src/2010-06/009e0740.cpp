// roc 2010-06 009e0740  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0740
//
// 009e0740  b99035c100           mov ecx, 0xc13590
// 009e0745  e9369ea2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0740 { void m(); };
extern T_func_009e0740 G1_func_009e0740;
void func_009e0740()
{
    G1_func_009e0740.m();
}
