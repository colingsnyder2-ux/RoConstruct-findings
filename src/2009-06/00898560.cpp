// roc 2009-06 00898560  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898560
//
// 00898560  b94882a400           mov ecx, 0xa48248
// 00898565  e9a61db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898560 { void m(); };
extern T_func_00898560 G1_func_00898560;
void func_00898560()
{
    G1_func_00898560.m();
}
