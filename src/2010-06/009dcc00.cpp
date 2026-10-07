// roc 2010-06 009dcc00  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcc00
//
// 009dcc00  b9184dc000           mov ecx, 0xc04d18
// 009dcc05  e96699bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dcc00 { void m(); };
extern T_func_009dcc00 G1_func_009dcc00;
void func_009dcc00()
{
    G1_func_009dcc00.m();
}
