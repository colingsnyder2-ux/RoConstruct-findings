// roc 2009-06 00895d60  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895d60
//
// 00895d60  b9d8eda300           mov ecx, 0xa3edd8
// 00895d65  e9a645b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00895d60 { void m(); };
extern T_func_00895d60 G1_func_00895d60;
void func_00895d60()
{
    G1_func_00895d60.m();
}
