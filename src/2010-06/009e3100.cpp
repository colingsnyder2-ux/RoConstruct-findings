// roc 2010-06 009e3100  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3100
//
// 009e3100  b9d0a4c100           mov ecx, 0xc1a4d0
// 009e3105  e97674a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e3100 { void m(); };
extern T_func_009e3100 G1_func_009e3100;
void func_009e3100()
{
    G1_func_009e3100.m();
}
