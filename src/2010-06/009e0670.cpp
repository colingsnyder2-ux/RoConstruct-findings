// roc 2010-06 009e0670  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0670
//
// 009e0670  b99042c100           mov ecx, 0xc14290
// 009e0675  e9069fa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0670 { void m(); };
extern T_func_009e0670 G1_func_009e0670;
void func_009e0670()
{
    G1_func_009e0670.m();
}
