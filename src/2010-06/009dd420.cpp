// roc 2010-06 009dd420  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd420
//
// 009dd420  b9a064c000           mov ecx, 0xc064a0
// 009dd425  e94691bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dd420 { void m(); };
extern T_func_009dd420 G1_func_009dd420;
void func_009dd420()
{
    G1_func_009dd420.m();
}
