// roc 2009-06 008989a0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008989a0
//
// 008989a0  b9284da400           mov ecx, 0xa44d28
// 008989a5  e96619b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008989a0 { void m(); };
extern T_func_008989a0 G1_func_008989a0;
void func_008989a0()
{
    G1_func_008989a0.m();
}
