// roc 2008-06 007ce0a0  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ce0a0
//
// 007ce0a0  b9003b9700           mov ecx, 0x973b00
// 007ce0a5  e9a6b8c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007ce0a0 { void m(); };
extern T_func_007ce0a0 G1_func_007ce0a0;
void func_007ce0a0()
{
    G1_func_007ce0a0.m();
}
