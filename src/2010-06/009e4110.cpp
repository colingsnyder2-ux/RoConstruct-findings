// roc 2010-06 009e4110  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4110
//
// 009e4110  b968c4c100           mov ecx, 0xc1c468
// 009e4115  e95624bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e4110 { void m(); };
extern T_func_009e4110 G1_func_009e4110;
void func_009e4110()
{
    G1_func_009e4110.m();
}
