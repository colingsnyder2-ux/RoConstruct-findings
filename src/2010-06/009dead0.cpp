// roc 2010-06 009dead0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dead0
//
// 009dead0  b998b4c000           mov ecx, 0xc0b498
// 009dead5  e9967abbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dead0 { void m(); };
extern T_func_009dead0 G1_func_009dead0;
void func_009dead0()
{
    G1_func_009dead0.m();
}
