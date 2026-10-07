// roc 2008-06 007c9210  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c9210
//
// 007c9210  b950169700           mov ecx, 0x971650
// 007c9215  e93607c4ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007c9210 { void m(); };
extern T_func_007c9210 G1_func_007c9210;
void func_007c9210()
{
    G1_func_007c9210.m();
}
