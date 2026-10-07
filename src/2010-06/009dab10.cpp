// roc 2010-06 009dab10  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dab10
//
// 009dab10  b9f004c000           mov ecx, 0xc004f0
// 009dab15  e966faa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dab10 { void m(); };
extern T_func_009dab10 G1_func_009dab10;
void func_009dab10()
{
    G1_func_009dab10.m();
}
