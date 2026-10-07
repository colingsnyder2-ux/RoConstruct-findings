// roc 2008-06 007c9250  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c9250
//
// 007c9250  b9d0179700           mov ecx, 0x9717d0
// 007c9255  e9f606c4ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007c9250 { void m(); };
extern T_func_007c9250 G1_func_007c9250;
void func_007c9250()
{
    G1_func_007c9250.m();
}
