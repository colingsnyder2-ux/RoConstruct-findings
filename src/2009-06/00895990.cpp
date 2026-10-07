// roc 2009-06 00895990  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895990
//
// 00895990  b948e0a300           mov ecx, 0xa3e048
// 00895995  e97649b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00895990 { void m(); };
extern T_func_00895990 G1_func_00895990;
void func_00895990()
{
    G1_func_00895990.m();
}
