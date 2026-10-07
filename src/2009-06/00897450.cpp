// roc 2009-06 00897450  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897450
//
// 00897450  b9503ea400           mov ecx, 0xa43e50
// 00897455  e9b683d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00897450 { void m(); };
extern T_func_00897450 G1_func_00897450;
void func_00897450()
{
    G1_func_00897450.m();
}
