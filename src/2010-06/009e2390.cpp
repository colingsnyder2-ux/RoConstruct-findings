// roc 2010-06 009e2390  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2390
//
// 009e2390  b9588dc100           mov ecx, 0xc18d58
// 009e2395  e9d641bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e2390 { void m(); };
extern T_func_009e2390 G1_func_009e2390;
void func_009e2390()
{
    G1_func_009e2390.m();
}
