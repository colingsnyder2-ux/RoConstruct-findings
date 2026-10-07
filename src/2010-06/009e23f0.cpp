// roc 2010-06 009e23f0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e23f0
//
// 009e23f0  b9108dc100           mov ecx, 0xc18d10
// 009e23f5  e97641bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e23f0 { void m(); };
extern T_func_009e23f0 G1_func_009e23f0;
void func_009e23f0()
{
    G1_func_009e23f0.m();
}
