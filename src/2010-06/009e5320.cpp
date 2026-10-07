// roc 2010-06 009e5320  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5320
//
// 009e5320  b928e1c100           mov ecx, 0xc1e128
// 009e5325  e94612bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e5320 { void m(); };
extern T_func_009e5320 G1_func_009e5320;
void func_009e5320()
{
    G1_func_009e5320.m();
}
