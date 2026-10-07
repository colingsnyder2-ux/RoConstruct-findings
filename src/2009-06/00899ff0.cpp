// roc 2009-06 00899ff0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899ff0
//
// 00899ff0  b9c0baa400           mov ecx, 0xa4bac0
// 00899ff5  e91658d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00899ff0 { void m(); };
extern T_func_00899ff0 G1_func_00899ff0;
void func_00899ff0()
{
    G1_func_00899ff0.m();
}
