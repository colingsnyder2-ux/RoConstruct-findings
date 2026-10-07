// roc 2010-06 009e0fc0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0fc0
//
// 009e0fc0  b9c06dc100           mov ecx, 0xc16dc0
// 009e0fc5  e956e0bcff           jmp 0x5af020
// auto-matched from its assembly shape

struct T_func_009e0fc0 { void m(); };
extern T_func_009e0fc0 G1_func_009e0fc0;
void func_009e0fc0()
{
    G1_func_009e0fc0.m();
}
