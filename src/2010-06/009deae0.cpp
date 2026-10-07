// roc 2010-06 009deae0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009deae0
//
// 009deae0  b900b7c000           mov ecx, 0xc0b700
// 009deae5  e96627d1ff           jmp 0x6f1250
// auto-matched from its assembly shape

struct T_func_009deae0 { void m(); };
extern T_func_009deae0 G1_func_009deae0;
void func_009deae0()
{
    G1_func_009deae0.m();
}
