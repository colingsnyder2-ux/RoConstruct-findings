// roc 2008-06 007c7a80  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c7a80
//
// 007c7a80  b97c0c9700           mov ecx, 0x970c7c
// 007c7a85  e9c61ec4ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007c7a80 { void m(); };
extern T_func_007c7a80 G1_func_007c7a80;
void func_007c7a80()
{
    G1_func_007c7a80.m();
}
