// roc 2010-06 009dab30  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dab30
//
// 009dab30  b9f002c000           mov ecx, 0xc002f0
// 009dab35  e946faa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dab30 { void m(); };
extern T_func_009dab30 G1_func_009dab30;
void func_009dab30()
{
    G1_func_009dab30.m();
}
