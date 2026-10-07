// roc 2010-06 009e0fa0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0fa0
//
// 009e0fa0  b9a06fc100           mov ecx, 0xc16fa0
// 009e0fa5  e956e6bcff           jmp 0x5af600
// auto-matched from its assembly shape

struct T_func_009e0fa0 { void m(); };
extern T_func_009e0fa0 G1_func_009e0fa0;
void func_009e0fa0()
{
    G1_func_009e0fa0.m();
}
