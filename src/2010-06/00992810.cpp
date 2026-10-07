// roc 2010-06 00992810  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00992810
//
// 00992810  b928bac000           mov ecx, 0xc0ba28
// 00992815  e9a609b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00992810 { void m(); };
extern T_func_00992810 G1_func_00992810;
void func_00992810()
{
    G1_func_00992810.m();
}
