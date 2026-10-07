// roc 2008-06 007c91b0  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c91b0
//
// 007c91b0  b950179700           mov ecx, 0x971750
// 007c91b5  e99607c4ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007c91b0 { void m(); };
extern T_func_007c91b0 G1_func_007c91b0;
void func_007c91b0()
{
    G1_func_007c91b0.m();
}
