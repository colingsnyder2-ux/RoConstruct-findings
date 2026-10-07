// roc 2010-06 009e0810  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0810
//
// 009e0810  b99028c100           mov ecx, 0xc12890
// 009e0815  e9669da2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0810 { void m(); };
extern T_func_009e0810 G1_func_009e0810;
void func_009e0810()
{
    G1_func_009e0810.m();
}
