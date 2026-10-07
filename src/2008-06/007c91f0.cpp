// roc 2008-06 007c91f0  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c91f0
//
// 007c91f0  b990179700           mov ecx, 0x971790
// 007c91f5  e95607c4ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007c91f0 { void m(); };
extern T_func_007c91f0 G1_func_007c91f0;
void func_007c91f0()
{
    G1_func_007c91f0.m();
}
