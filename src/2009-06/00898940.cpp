// roc 2009-06 00898940  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898940
//
// 00898940  b9d851a400           mov ecx, 0xa451d8
// 00898945  e9c619b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898940 { void m(); };
extern T_func_00898940 G1_func_00898940;
void func_00898940()
{
    G1_func_00898940.m();
}
