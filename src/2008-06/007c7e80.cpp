// roc 2008-06 007c7e80  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c7e80
//
// 007c7e80  b9380f9700           mov ecx, 0x970f38
// 007c7e85  e9c61ac4ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007c7e80 { void m(); };
extern T_func_007c7e80 G1_func_007c7e80;
void func_007c7e80()
{
    G1_func_007c7e80.m();
}
