// roc 2009-06 00898620  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898620
//
// 00898620  b9e878a400           mov ecx, 0xa478e8
// 00898625  e9e61cb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898620 { void m(); };
extern T_func_00898620 G1_func_00898620;
void func_00898620()
{
    G1_func_00898620.m();
}
