// roc 2009-06 00898460  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898460
//
// 00898460  b9c88ea400           mov ecx, 0xa48ec8
// 00898465  e9a61eb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898460 { void m(); };
extern T_func_00898460 G1_func_00898460;
void func_00898460()
{
    G1_func_00898460.m();
}
