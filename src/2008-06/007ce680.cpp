// roc 2008-06 007ce680  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ce680
//
// 007ce680  b9a03c9700           mov ecx, 0x973ca0
// 007ce685  e9c6b2c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007ce680 { void m(); };
extern T_func_007ce680 G1_func_007ce680;
void func_007ce680()
{
    G1_func_007ce680.m();
}
