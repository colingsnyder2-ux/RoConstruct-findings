// roc 2009-06 00898870  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898870
//
// 00898870  b9005ca400           mov ecx, 0xa45c00
// 00898875  e9961ab7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898870 { void m(); };
extern T_func_00898870 G1_func_00898870;
void func_00898870()
{
    G1_func_00898870.m();
}
