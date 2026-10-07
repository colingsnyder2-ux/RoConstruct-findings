// roc 2010-06 009dcbe0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcbe0
//
// 009dcbe0  b98850c000           mov ecx, 0xc05088
// 009dcbe5  e98699bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dcbe0 { void m(); };
extern T_func_009dcbe0 G1_func_009dcbe0;
void func_009dcbe0()
{
    G1_func_009dcbe0.m();
}
