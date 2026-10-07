// roc 2009-06 00898660  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898660
//
// 00898660  b9c875a400           mov ecx, 0xa475c8
// 00898665  e9a61cb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898660 { void m(); };
extern T_func_00898660 G1_func_00898660;
void func_00898660()
{
    G1_func_00898660.m();
}
