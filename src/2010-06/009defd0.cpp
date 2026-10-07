// roc 2010-06 009defd0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009defd0
//
// 009defd0  b970bbc000           mov ecx, 0xc0bb70
// 009defd5  e9a6b5a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009defd0 { void m(); };
extern T_func_009defd0 G1_func_009defd0;
void func_009defd0()
{
    G1_func_009defd0.m();
}
