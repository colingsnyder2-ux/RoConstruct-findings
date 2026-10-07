// roc 2010-06 009dde20  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dde20
//
// 009dde20  b9608ac000           mov ecx, 0xc08a60
// 009dde25  e9f6b2b4ff           jmp 0x529120
// auto-matched from its assembly shape

struct T_func_009dde20 { void m(); };
extern T_func_009dde20 G1_func_009dde20;
void func_009dde20()
{
    G1_func_009dde20.m();
}
