// roc 2010-06 009dcc40  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcc40
//
// 009dcc40  b9704fc000           mov ecx, 0xc04f70
// 009dcc45  e92699bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dcc40 { void m(); };
extern T_func_009dcc40 G1_func_009dcc40;
void func_009dcc40()
{
    G1_func_009dcc40.m();
}
