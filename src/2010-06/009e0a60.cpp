// roc 2010-06 009e0a60  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0a60
//
// 009e0a60  b99003c100           mov ecx, 0xc10390
// 009e0a65  e9169ba2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0a60 { void m(); };
extern T_func_009e0a60 G1_func_009e0a60;
void func_009e0a60()
{
    G1_func_009e0a60.m();
}
