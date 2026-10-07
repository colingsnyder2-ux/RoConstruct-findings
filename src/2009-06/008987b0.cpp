// roc 2009-06 008987b0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008987b0
//
// 008987b0  b96065a400           mov ecx, 0xa46560
// 008987b5  e9561bb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008987b0 { void m(); };
extern T_func_008987b0 G1_func_008987b0;
void func_008987b0()
{
    G1_func_008987b0.m();
}
