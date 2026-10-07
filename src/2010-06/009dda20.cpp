// roc 2010-06 009dda20  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dda20
//
// 009dda20  b9b068c000           mov ecx, 0xc068b0
// 009dda25  e9468bbbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dda20 { void m(); };
extern T_func_009dda20 G1_func_009dda20;
void func_009dda20()
{
    G1_func_009dda20.m();
}
