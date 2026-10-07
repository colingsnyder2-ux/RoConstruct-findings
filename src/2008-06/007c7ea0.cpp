// roc 2008-06 007c7ea0  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c7ea0
//
// 007c7ea0  b9bc0e9700           mov ecx, 0x970ebc
// 007c7ea5  e9a61ac4ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007c7ea0 { void m(); };
extern T_func_007c7ea0 G1_func_007c7ea0;
void func_007c7ea0()
{
    G1_func_007c7ea0.m();
}
