// roc 2008-06 007db360  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007db360
//
// 007db360  b944d69700           mov ecx, 0x97d644
// 007db365  e9e6e5c2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007db360 { void m(); };
extern T_func_007db360 G1_func_007db360;
void func_007db360()
{
    G1_func_007db360.m();
}
