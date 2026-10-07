// roc 2010-06 009dedb0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dedb0
//
// 009dedb0  b9d8b8c000           mov ecx, 0xc0b8d8
// 009dedb5  e9b677bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dedb0 { void m(); };
extern T_func_009dedb0 G1_func_009dedb0;
void func_009dedb0()
{
    G1_func_009dedb0.m();
}
