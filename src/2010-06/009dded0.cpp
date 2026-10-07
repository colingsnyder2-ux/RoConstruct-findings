// roc 2010-06 009dded0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dded0
//
// 009dded0  b9088cc000           mov ecx, 0xc08c08
// 009dded5  e9a6c6a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dded0 { void m(); };
extern T_func_009dded0 G1_func_009dded0;
void func_009dded0()
{
    G1_func_009dded0.m();
}
