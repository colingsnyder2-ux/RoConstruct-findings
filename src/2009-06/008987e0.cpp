// roc 2009-06 008987e0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008987e0
//
// 008987e0  b90863a400           mov ecx, 0xa46308
// 008987e5  e9261bb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008987e0 { void m(); };
extern T_func_008987e0 G1_func_008987e0;
void func_008987e0()
{
    G1_func_008987e0.m();
}
