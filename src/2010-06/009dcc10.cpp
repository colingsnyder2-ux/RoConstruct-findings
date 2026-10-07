// roc 2010-06 009dcc10  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcc10
//
// 009dcc10  b9084fc000           mov ecx, 0xc04f08
// 009dcc15  e95699bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dcc10 { void m(); };
extern T_func_009dcc10 G1_func_009dcc10;
void func_009dcc10()
{
    G1_func_009dcc10.m();
}
