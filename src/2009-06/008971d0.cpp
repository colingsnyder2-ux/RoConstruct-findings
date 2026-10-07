// roc 2009-06 008971d0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008971d0
//
// 008971d0  b9782ea400           mov ecx, 0xa42e78
// 008971d5  e93631b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008971d0 { void m(); };
extern T_func_008971d0 G1_func_008971d0;
void func_008971d0()
{
    G1_func_008971d0.m();
}
