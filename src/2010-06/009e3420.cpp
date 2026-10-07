// roc 2010-06 009e3420  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3420
//
// 009e3420  b930aac100           mov ecx, 0xc1aa30
// 009e3425  e94631bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e3420 { void m(); };
extern T_func_009e3420 G1_func_009e3420;
void func_009e3420()
{
    G1_func_009e3420.m();
}
