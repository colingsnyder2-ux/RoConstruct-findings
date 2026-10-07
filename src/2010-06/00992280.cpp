// roc 2010-06 00992280  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00992280
//
// 00992280  b9b8b3c000           mov ecx, 0xc0b3b8
// 00992285  e9360fb1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00992280 { void m(); };
extern T_func_00992280 G1_func_00992280;
void func_00992280()
{
    G1_func_00992280.m();
}
