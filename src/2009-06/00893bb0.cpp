// roc 2009-06 00893bb0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893bb0
//
// 00893bb0  b9389ca300           mov ecx, 0xa39c38
// 00893bb5  e95667b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00893bb0 { void m(); };
extern T_func_00893bb0 G1_func_00893bb0;
void func_00893bb0()
{
    G1_func_00893bb0.m();
}
