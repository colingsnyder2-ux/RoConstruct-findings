// roc 2008-06 007c7aa0  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c7aa0
//
// 007c7aa0  b9b40b9700           mov ecx, 0x970bb4
// 007c7aa5  e9a61ec4ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007c7aa0 { void m(); };
extern T_func_007c7aa0 G1_func_007c7aa0;
void func_007c7aa0()
{
    G1_func_007c7aa0.m();
}
