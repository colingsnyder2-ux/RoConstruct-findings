// roc 2009-06 00893be0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893be0
//
// 00893be0  b90099a300           mov ecx, 0xa39900
// 00893be5  e92667b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00893be0 { void m(); };
extern T_func_00893be0 G1_func_00893be0;
void func_00893be0()
{
    G1_func_00893be0.m();
}
