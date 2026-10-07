// roc 2010-06 009e2110  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2110
//
// 009e2110  b94089c100           mov ecx, 0xc18940
// 009e2115  e95644bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e2110 { void m(); };
extern T_func_009e2110 G1_func_009e2110;
void func_009e2110()
{
    G1_func_009e2110.m();
}
