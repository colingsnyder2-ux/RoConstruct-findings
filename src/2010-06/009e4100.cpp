// roc 2010-06 009e4100  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4100
//
// 009e4100  b918c4c100           mov ecx, 0xc1c418
// 009e4105  e96624bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e4100 { void m(); };
extern T_func_009e4100 G1_func_009e4100;
void func_009e4100()
{
    G1_func_009e4100.m();
}
