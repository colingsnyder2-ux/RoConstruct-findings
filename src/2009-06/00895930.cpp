// roc 2009-06 00895930  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895930
//
// 00895930  b9f8e4a300           mov ecx, 0xa3e4f8
// 00895935  e9d649b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00895930 { void m(); };
extern T_func_00895930 G1_func_00895930;
void func_00895930()
{
    G1_func_00895930.m();
}
