// roc 2010-06 009a1a70  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a1a70
//
// 009a1a70  b928e5c100           mov ecx, 0xc1e528
// 009a1a75  e94617b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a1a70 { void m(); };
extern T_func_009a1a70 G1_func_009a1a70;
void func_009a1a70()
{
    G1_func_009a1a70.m();
}
