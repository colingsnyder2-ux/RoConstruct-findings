// roc 2010-06 009dcd90  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcd90
//
// 009dcd90  b9604dc000           mov ecx, 0xc04d60
// 009dcd95  e9d697bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dcd90 { void m(); };
extern T_func_009dcd90 G1_func_009dcd90;
void func_009dcd90()
{
    G1_func_009dcd90.m();
}
