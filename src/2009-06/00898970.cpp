// roc 2009-06 00898970  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898970
//
// 00898970  b9804fa400           mov ecx, 0xa44f80
// 00898975  e99619b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898970 { void m(); };
extern T_func_00898970 G1_func_00898970;
void func_00898970()
{
    G1_func_00898970.m();
}
