// roc 2009-06 00898820  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898820
//
// 00898820  b9e85fa400           mov ecx, 0xa45fe8
// 00898825  e9e61ab7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898820 { void m(); };
extern T_func_00898820 G1_func_00898820;
void func_00898820()
{
    G1_func_00898820.m();
}
