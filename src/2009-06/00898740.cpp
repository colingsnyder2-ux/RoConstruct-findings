// roc 2009-06 00898740  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898740
//
// 00898740  b9d86aa400           mov ecx, 0xa46ad8
// 00898745  e9c61bb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898740 { void m(); };
extern T_func_00898740 G1_func_00898740;
void func_00898740()
{
    G1_func_00898740.m();
}
