// roc 2009-06 008988e0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008988e0
//
// 008988e0  b98856a400           mov ecx, 0xa45688
// 008988e5  e9261ab7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008988e0 { void m(); };
extern T_func_008988e0 G1_func_008988e0;
void func_008988e0()
{
    G1_func_008988e0.m();
}
