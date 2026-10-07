// roc 2009-06 00899760  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899760
//
// 00899760  b948aea400           mov ecx, 0xa4ae48
// 00899765  e97658d6ff           jmp 0x5fefe0
// auto-matched from its assembly shape

struct T_func_00899760 { void m(); };
extern T_func_00899760 G1_func_00899760;
void func_00899760()
{
    G1_func_00899760.m();
}
