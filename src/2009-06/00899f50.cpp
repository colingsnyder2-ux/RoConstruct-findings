// roc 2009-06 00899f50  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899f50
//
// 00899f50  b948b9a400           mov ecx, 0xa4b948
// 00899f55  e9a6f2dcff           jmp 0x669200
// auto-matched from its assembly shape

struct T_func_00899f50 { void m(); };
extern T_func_00899f50 G1_func_00899f50;
void func_00899f50()
{
    G1_func_00899f50.m();
}
