// roc 2009-06 00899f40  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899f40
//
// 00899f40  b938b8a400           mov ecx, 0xa4b838
// 00899f45  e9b6f2dcff           jmp 0x669200
// auto-matched from its assembly shape

struct T_func_00899f40 { void m(); };
extern T_func_00899f40 G1_func_00899f40;
void func_00899f40()
{
    G1_func_00899f40.m();
}
