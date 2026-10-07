// roc 2010-06 009dab00  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dab00
//
// 009dab00  b9d8fcbf00           mov ecx, 0xbffcd8
// 009dab05  e976faa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dab00 { void m(); };
extern T_func_009dab00 G1_func_009dab00;
void func_009dab00()
{
    G1_func_009dab00.m();
}
