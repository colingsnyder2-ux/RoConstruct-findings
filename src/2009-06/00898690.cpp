// roc 2009-06 00898690  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898690
//
// 00898690  b97073a400           mov ecx, 0xa47370
// 00898695  e9761cb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898690 { void m(); };
extern T_func_00898690 G1_func_00898690;
void func_00898690()
{
    G1_func_00898690.m();
}
