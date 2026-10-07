// roc 2009-06 00893bd0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893bd0
//
// 00893bd0  b9c899a300           mov ecx, 0xa399c8
// 00893bd5  e93667b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00893bd0 { void m(); };
extern T_func_00893bd0 G1_func_00893bd0;
void func_00893bd0()
{
    G1_func_00893bd0.m();
}
