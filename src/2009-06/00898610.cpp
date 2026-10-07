// roc 2009-06 00898610  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898610
//
// 00898610  b9b079a400           mov ecx, 0xa479b0
// 00898615  e9f61cb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898610 { void m(); };
extern T_func_00898610 G1_func_00898610;
void func_00898610()
{
    G1_func_00898610.m();
}
