// roc 2010-06 00992220  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00992220
//
// 00992220  b988b5c000           mov ecx, 0xc0b588
// 00992225  e9960fb1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00992220 { void m(); };
extern T_func_00992220 G1_func_00992220;
void func_00992220()
{
    G1_func_00992220.m();
}
