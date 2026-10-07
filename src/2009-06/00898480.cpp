// roc 2009-06 00898480  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898480
//
// 00898480  b9388da400           mov ecx, 0xa48d38
// 00898485  e9861eb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898480 { void m(); };
extern T_func_00898480 G1_func_00898480;
void func_00898480()
{
    G1_func_00898480.m();
}
