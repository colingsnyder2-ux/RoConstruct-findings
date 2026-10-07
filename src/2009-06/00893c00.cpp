// roc 2009-06 00893c00  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893c00
//
// 00893c00  b9909ea300           mov ecx, 0xa39e90
// 00893c05  e90667b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00893c00 { void m(); };
extern T_func_00893c00 G1_func_00893c00;
void func_00893c00()
{
    G1_func_00893c00.m();
}
