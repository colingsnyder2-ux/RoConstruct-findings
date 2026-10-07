// roc 2009-06 00895960  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895960
//
// 00895960  b9a0e2a300           mov ecx, 0xa3e2a0
// 00895965  e9a649b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00895960 { void m(); };
extern T_func_00895960 G1_func_00895960;
void func_00895960()
{
    G1_func_00895960.m();
}
