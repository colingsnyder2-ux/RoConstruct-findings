// roc 2010-06 009dab50  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dab50
//
// 009dab50  b9e0febf00           mov ecx, 0xbffee0
// 009dab55  e926faa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dab50 { void m(); };
extern T_func_009dab50 G1_func_009dab50;
void func_009dab50()
{
    G1_func_009dab50.m();
}
