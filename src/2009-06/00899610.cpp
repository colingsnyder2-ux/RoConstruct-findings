// roc 2009-06 00899610  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899610
//
// 00899610  b900aea400           mov ecx, 0xa4ae00
// 00899615  e9f661d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00899610 { void m(); };
extern T_func_00899610 G1_func_00899610;
void func_00899610()
{
    G1_func_00899610.m();
}
