// roc 2007-08 00779360  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779360
//
// 00779360  b9800d8c00           mov ecx, 0x8c0d80
// 00779365  e9a6e2c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779360 { void m(); };
extern T_func_00779360 G1_func_00779360;
void func_00779360()
{
    G1_func_00779360.m();
}
