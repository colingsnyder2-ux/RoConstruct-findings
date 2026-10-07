// roc 2010-06 00992160  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00992160
//
// 00992160  b9e0b4c000           mov ecx, 0xc0b4e0
// 00992165  e95610b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00992160 { void m(); };
extern T_func_00992160 G1_func_00992160;
void func_00992160()
{
    G1_func_00992160.m();
}
