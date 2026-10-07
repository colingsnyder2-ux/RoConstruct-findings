// roc 2010-06 009dde30  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dde30
//
// 009dde30  b9f889c000           mov ecx, 0xc089f8
// 009dde35  e966b2b4ff           jmp 0x5290a0
// auto-matched from its assembly shape

struct T_func_009dde30 { void m(); };
extern T_func_009dde30 G1_func_009dde30;
void func_009dde30()
{
    G1_func_009dde30.m();
}
