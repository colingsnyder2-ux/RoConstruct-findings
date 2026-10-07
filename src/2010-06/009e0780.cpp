// roc 2010-06 009e0780  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0780
//
// 009e0780  b99031c100           mov ecx, 0xc13190
// 009e0785  e9f69da2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0780 { void m(); };
extern T_func_009e0780 G1_func_009e0780;
void func_009e0780()
{
    G1_func_009e0780.m();
}
