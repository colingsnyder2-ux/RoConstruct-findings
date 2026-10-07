// roc 2010-06 00992200  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00992200
//
// 00992200  b944b6c000           mov ecx, 0xc0b644
// 00992205  e9b60fb1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00992200 { void m(); };
extern T_func_00992200 G1_func_00992200;
void func_00992200()
{
    G1_func_00992200.m();
}
