// roc 2009-06 00895950  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895950
//
// 00895950  b968e3a300           mov ecx, 0xa3e368
// 00895955  e9b649b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00895950 { void m(); };
extern T_func_00895950 G1_func_00895950;
void func_00895950()
{
    G1_func_00895950.m();
}
