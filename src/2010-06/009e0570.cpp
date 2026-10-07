// roc 2010-06 009e0570  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0570
//
// 009e0570  b99052c100           mov ecx, 0xc15290
// 009e0575  e906a0a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0570 { void m(); };
extern T_func_009e0570 G1_func_009e0570;
void func_009e0570()
{
    G1_func_009e0570.m();
}
