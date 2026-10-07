// roc 2010-06 009dda00  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dda00
//
// 009dda00  b9f868c000           mov ecx, 0xc068f8
// 009dda05  e94638d1ff           jmp 0x6f1250
// auto-matched from its assembly shape

struct T_func_009dda00 { void m(); };
extern T_func_009dda00 G1_func_009dda00;
void func_009dda00()
{
    G1_func_009dda00.m();
}
