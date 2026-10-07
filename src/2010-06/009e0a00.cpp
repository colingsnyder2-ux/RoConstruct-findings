// roc 2010-06 009e0a00  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0a00
//
// 009e0a00  b99009c100           mov ecx, 0xc10990
// 009e0a05  e9769ba2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0a00 { void m(); };
extern T_func_009e0a00 G1_func_009e0a00;
void func_009e0a00()
{
    G1_func_009e0a00.m();
}
