// roc 2009-06 00893c30  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893c30
//
// 00893c30  b9989aa300           mov ecx, 0xa39a98
// 00893c35  e9d666b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00893c30 { void m(); };
extern T_func_00893c30 G1_func_00893c30;
void func_00893c30()
{
    G1_func_00893c30.m();
}
