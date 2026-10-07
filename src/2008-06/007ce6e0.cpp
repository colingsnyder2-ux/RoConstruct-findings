// roc 2008-06 007ce6e0  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ce6e0
//
// 007ce6e0  b9903e9700           mov ecx, 0x973e90
// 007ce6e5  e966b2c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007ce6e0 { void m(); };
extern T_func_007ce6e0 G1_func_007ce6e0;
void func_007ce6e0()
{
    G1_func_007ce6e0.m();
}
