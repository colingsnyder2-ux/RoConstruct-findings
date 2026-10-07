// roc 2010-06 009e7360  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7360
//
// 009e7360  b9e007c200           mov ecx, 0xc207e0
// 009e7365  e9d6d1c1ff           jmp 0x604540
// auto-matched from its assembly shape

struct T_func_009e7360 { void m(); };
extern T_func_009e7360 G1_func_009e7360;
void func_009e7360()
{
    G1_func_009e7360.m();
}
