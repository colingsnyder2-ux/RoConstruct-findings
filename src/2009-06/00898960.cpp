// roc 2009-06 00898960  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898960
//
// 00898960  b94850a400           mov ecx, 0xa45048
// 00898965  e9a619b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898960 { void m(); };
extern T_func_00898960 G1_func_00898960;
void func_00898960()
{
    G1_func_00898960.m();
}
