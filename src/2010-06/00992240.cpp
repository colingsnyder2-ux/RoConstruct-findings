// roc 2010-06 00992240  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00992240
//
// 00992240  b95cb4c000           mov ecx, 0xc0b45c
// 00992245  e9760fb1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00992240 { void m(); };
extern T_func_00992240 G1_func_00992240;
void func_00992240()
{
    G1_func_00992240.m();
}
