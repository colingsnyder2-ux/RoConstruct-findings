// roc 2009-06 00897610  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897610
//
// 00897610  b95041a400           mov ecx, 0xa44150
// 00897615  e9f681d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00897610 { void m(); };
extern T_func_00897610 G1_func_00897610;
void func_00897610()
{
    G1_func_00897610.m();
}
