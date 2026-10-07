// roc 2009-06 00893c10  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893c10
//
// 00893c10  b9c89da300           mov ecx, 0xa39dc8
// 00893c15  e9f666b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00893c10 { void m(); };
extern T_func_00893c10 G1_func_00893c10;
void func_00893c10()
{
    G1_func_00893c10.m();
}
