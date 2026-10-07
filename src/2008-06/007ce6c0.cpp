// roc 2008-06 007ce6c0  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ce6c0
//
// 007ce6c0  b9483f9700           mov ecx, 0x973f48
// 007ce6c5  e986b2c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007ce6c0 { void m(); };
extern T_func_007ce6c0 G1_func_007ce6c0;
void func_007ce6c0()
{
    G1_func_007ce6c0.m();
}
