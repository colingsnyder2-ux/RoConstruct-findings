// roc 2010-06 009e0720  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0720
//
// 009e0720  b99037c100           mov ecx, 0xc13790
// 009e0725  e9569ea2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0720 { void m(); };
extern T_func_009e0720 G1_func_009e0720;
void func_009e0720()
{
    G1_func_009e0720.m();
}
