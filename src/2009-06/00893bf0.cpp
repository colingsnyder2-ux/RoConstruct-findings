// roc 2009-06 00893bf0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893bf0
//
// 00893bf0  b9589fa300           mov ecx, 0xa39f58
// 00893bf5  e91667b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00893bf0 { void m(); };
extern T_func_00893bf0 G1_func_00893bf0;
void func_00893bf0()
{
    G1_func_00893bf0.m();
}
