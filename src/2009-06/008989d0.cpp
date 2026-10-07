// roc 2009-06 008989d0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008989d0
//
// 008989d0  b9d04aa400           mov ecx, 0xa44ad0
// 008989d5  e93619b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008989d0 { void m(); };
extern T_func_008989d0 G1_func_008989d0;
void func_008989d0()
{
    G1_func_008989d0.m();
}
