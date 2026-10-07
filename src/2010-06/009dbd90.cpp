// roc 2010-06 009dbd90  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dbd90
//
// 009dbd90  b9581ec000           mov ecx, 0xc01e58
// 009dbd95  e9e6e7a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dbd90 { void m(); };
extern T_func_009dbd90 G1_func_009dbd90;
void func_009dbd90()
{
    G1_func_009dbd90.m();
}
