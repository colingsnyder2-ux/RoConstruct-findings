// roc 2009-06 00894720  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894720
//
// 00894720  b9d8a4a300           mov ecx, 0xa3a4d8
// 00894725  e9e65bb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00894720 { void m(); };
extern T_func_00894720 G1_func_00894720;
void func_00894720()
{
    G1_func_00894720.m();
}
