// roc 2009-06 00895980  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895980
//
// 00895980  b910e1a300           mov ecx, 0xa3e110
// 00895985  e98649b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00895980 { void m(); };
extern T_func_00895980 G1_func_00895980;
void func_00895980()
{
    G1_func_00895980.m();
}
