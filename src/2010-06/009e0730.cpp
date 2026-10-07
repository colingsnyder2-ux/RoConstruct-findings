// roc 2010-06 009e0730  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0730
//
// 009e0730  b99036c100           mov ecx, 0xc13690
// 009e0735  e9469ea2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0730 { void m(); };
extern T_func_009e0730 G1_func_009e0730;
void func_009e0730()
{
    G1_func_009e0730.m();
}
