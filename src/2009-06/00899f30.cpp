// roc 2009-06 00899f30  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899f30
//
// 00899f30  b988b8a400           mov ecx, 0xa4b888
// 00899f35  e9c6f2dcff           jmp 0x669200
// auto-matched from its assembly shape

struct T_func_00899f30 { void m(); };
extern T_func_00899f30 G1_func_00899f30;
void func_00899f30()
{
    G1_func_00899f30.m();
}
