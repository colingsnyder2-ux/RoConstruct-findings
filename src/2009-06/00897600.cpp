// roc 2009-06 00897600  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897600
//
// 00897600  b94840a400           mov ecx, 0xa44048
// 00897605  e9062db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00897600 { void m(); };
extern T_func_00897600 G1_func_00897600;
void func_00897600()
{
    G1_func_00897600.m();
}
