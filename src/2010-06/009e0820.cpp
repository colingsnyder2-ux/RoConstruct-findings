// roc 2010-06 009e0820  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0820
//
// 009e0820  b99027c100           mov ecx, 0xc12790
// 009e0825  e9569da2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0820 { void m(); };
extern T_func_009e0820 G1_func_009e0820;
void func_009e0820()
{
    G1_func_009e0820.m();
}
