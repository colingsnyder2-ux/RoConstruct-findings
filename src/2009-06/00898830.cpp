// roc 2009-06 00898830  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898830
//
// 00898830  b9205fa400           mov ecx, 0xa45f20
// 00898835  e9d61ab7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898830 { void m(); };
extern T_func_00898830 G1_func_00898830;
void func_00898830()
{
    G1_func_00898830.m();
}
