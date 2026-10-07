// roc 2009-06 00895100  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895100
//
// 00895100  b918d6a300           mov ecx, 0xa3d618
// 00895105  e90652b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00895100 { void m(); };
extern T_func_00895100 G1_func_00895100;
void func_00895100()
{
    G1_func_00895100.m();
}
