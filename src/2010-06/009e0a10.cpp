// roc 2010-06 009e0a10  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0a10
//
// 009e0a10  b99008c100           mov ecx, 0xc10890
// 009e0a15  e9669ba2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0a10 { void m(); };
extern T_func_009e0a10 G1_func_009e0a10;
void func_009e0a10()
{
    G1_func_009e0a10.m();
}
