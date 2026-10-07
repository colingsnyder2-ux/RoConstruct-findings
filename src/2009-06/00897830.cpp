// roc 2009-06 00897830  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897830
//
// 00897830  b9a843a400           mov ecx, 0xa443a8
// 00897835  e9d62ab7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00897830 { void m(); };
extern T_func_00897830 G1_func_00897830;
void func_00897830()
{
    G1_func_00897830.m();
}
