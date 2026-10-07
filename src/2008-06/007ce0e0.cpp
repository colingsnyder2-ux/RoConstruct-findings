// roc 2008-06 007ce0e0  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ce0e0
//
// 007ce0e0  b9403b9700           mov ecx, 0x973b40
// 007ce0e5  e966b8c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007ce0e0 { void m(); };
extern T_func_007ce0e0 G1_func_007ce0e0;
void func_007ce0e0()
{
    G1_func_007ce0e0.m();
}
