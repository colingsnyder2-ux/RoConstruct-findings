// roc 2010-06 009dee00  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dee00
//
// 009dee00  b928b9c000           mov ecx, 0xc0b928
// 009dee05  e976b7a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dee00 { void m(); };
extern T_func_009dee00 G1_func_009dee00;
void func_009dee00()
{
    G1_func_009dee00.m();
}
