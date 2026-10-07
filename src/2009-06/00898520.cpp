// roc 2009-06 00898520  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898520
//
// 00898520  b96885a400           mov ecx, 0xa48568
// 00898525  e9e61db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898520 { void m(); };
extern T_func_00898520 G1_func_00898520;
void func_00898520()
{
    G1_func_00898520.m();
}
