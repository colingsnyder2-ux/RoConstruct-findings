// roc 2009-06 00895940  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895940
//
// 00895940  b930e4a300           mov ecx, 0xa3e430
// 00895945  e9c649b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00895940 { void m(); };
extern T_func_00895940 G1_func_00895940;
void func_00895940()
{
    G1_func_00895940.m();
}
