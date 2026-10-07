// roc 2010-06 00992180  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00992180
//
// 00992180  b930b3c000           mov ecx, 0xc0b330
// 00992185  e93610b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00992180 { void m(); };
extern T_func_00992180 G1_func_00992180;
void func_00992180()
{
    G1_func_00992180.m();
}
