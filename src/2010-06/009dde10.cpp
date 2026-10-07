// roc 2010-06 009dde10  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dde10
//
// 009dde10  b9c88ac000           mov ecx, 0xc08ac8
// 009dde15  e986b3b4ff           jmp 0x5291a0
// auto-matched from its assembly shape

struct T_func_009dde10 { void m(); };
extern T_func_009dde10 G1_func_009dde10;
void func_009dde10()
{
    G1_func_009dde10.m();
}
