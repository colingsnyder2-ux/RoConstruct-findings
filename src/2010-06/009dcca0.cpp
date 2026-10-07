// roc 2010-06 009dcca0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcca0
//
// 009dcca0  b9884cc000           mov ecx, 0xc04c88
// 009dcca5  e9c698bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dcca0 { void m(); };
extern T_func_009dcca0 G1_func_009dcca0;
void func_009dcca0()
{
    G1_func_009dcca0.m();
}
