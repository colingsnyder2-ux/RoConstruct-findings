// roc 2010-06 009e6c10  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6c10
//
// 009e6c10  b998fec100           mov ecx, 0xc1fe98
// 009e6c15  e956f9baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e6c10 { void m(); };
extern T_func_009e6c10 G1_func_009e6c10;
void func_009e6c10()
{
    G1_func_009e6c10.m();
}
