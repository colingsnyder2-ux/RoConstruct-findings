// roc 2010-06 009dcc30  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcc30
//
// 009dcc30  b9d04cc000           mov ecx, 0xc04cd0
// 009dcc35  e93699bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dcc30 { void m(); };
extern T_func_009dcc30 G1_func_009dcc30;
void func_009dcc30()
{
    G1_func_009dcc30.m();
}
