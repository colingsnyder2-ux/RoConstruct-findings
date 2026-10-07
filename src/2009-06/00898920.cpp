// roc 2009-06 00898920  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898920
//
// 00898920  b96853a400           mov ecx, 0xa45368
// 00898925  e9e619b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898920 { void m(); };
extern T_func_00898920 G1_func_00898920;
void func_00898920()
{
    G1_func_00898920.m();
}
