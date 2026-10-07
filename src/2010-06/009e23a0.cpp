// roc 2010-06 009e23a0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e23a0
//
// 009e23a0  b9808cc100           mov ecx, 0xc18c80
// 009e23a5  e9c641bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e23a0 { void m(); };
extern T_func_009e23a0 G1_func_009e23a0;
void func_009e23a0()
{
    G1_func_009e23a0.m();
}
