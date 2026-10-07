// roc 2010-06 009dde40  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dde40
//
// 009dde40  b99089c000           mov ecx, 0xc08990
// 009dde45  e9d6b1b4ff           jmp 0x529020
// auto-matched from its assembly shape

struct T_func_009dde40 { void m(); };
extern T_func_009dde40 G1_func_009dde40;
void func_009dde40()
{
    G1_func_009dde40.m();
}
