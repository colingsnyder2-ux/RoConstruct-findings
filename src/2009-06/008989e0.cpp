// roc 2009-06 008989e0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008989e0
//
// 008989e0  b9084aa400           mov ecx, 0xa44a08
// 008989e5  e92619b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008989e0 { void m(); };
extern T_func_008989e0 G1_func_008989e0;
void func_008989e0()
{
    G1_func_008989e0.m();
}
