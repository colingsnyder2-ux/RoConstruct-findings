// roc 2010-06 009dccb0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dccb0
//
// 009dccb0  b9d050c000           mov ecx, 0xc050d0
// 009dccb5  e9b698bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dccb0 { void m(); };
extern T_func_009dccb0 G1_func_009dccb0;
void func_009dccb0()
{
    G1_func_009dccb0.m();
}
