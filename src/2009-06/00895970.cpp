// roc 2009-06 00895970  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895970
//
// 00895970  b9d8e1a300           mov ecx, 0xa3e1d8
// 00895975  e99649b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00895970 { void m(); };
extern T_func_00895970 G1_func_00895970;
void func_00895970()
{
    G1_func_00895970.m();
}
