// roc 2009-06 00899750  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899750
//
// 00899750  b958aaa400           mov ecx, 0xa4aa58
// 00899755  e9a684dbff           jmp 0x651c00
// auto-matched from its assembly shape

struct T_func_00899750 { void m(); };
extern T_func_00899750 G1_func_00899750;
void func_00899750()
{
    G1_func_00899750.m();
}
