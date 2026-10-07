// roc 2010-06 009960ae  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009960ae
//
// 009960ae  b9d065c000           mov ecx, 0xc065d0
// 009960b3  e9a8a6daff           jmp 0x740760
// auto-matched from its assembly shape

struct T_func_009960ae { void m(); };
extern T_func_009960ae G1_func_009960ae;
void func_009960ae()
{
    G1_func_009960ae.m();
}
