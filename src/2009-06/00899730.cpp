// roc 2009-06 00899730  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899730
//
// 00899730  b9f0aba400           mov ecx, 0xa4abf0
// 00899735  e9d660d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00899730 { void m(); };
extern T_func_00899730 G1_func_00899730;
void func_00899730()
{
    G1_func_00899730.m();
}
