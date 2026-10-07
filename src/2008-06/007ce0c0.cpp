// roc 2008-06 007ce0c0  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ce0c0
//
// 007ce0c0  b9f03b9700           mov ecx, 0x973bf0
// 007ce0c5  e986b8c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007ce0c0 { void m(); };
extern T_func_007ce0c0 G1_func_007ce0c0;
void func_007ce0c0()
{
    G1_func_007ce0c0.m();
}
