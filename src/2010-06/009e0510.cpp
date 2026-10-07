// roc 2010-06 009e0510  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0510
//
// 009e0510  b99058c100           mov ecx, 0xc15890
// 009e0515  e966a0a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0510 { void m(); };
extern T_func_009e0510 G1_func_009e0510;
void func_009e0510()
{
    G1_func_009e0510.m();
}
