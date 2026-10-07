// roc 2009-06 00898880  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898880
//
// 00898880  b9385ba400           mov ecx, 0xa45b38
// 00898885  e9861ab7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898880 { void m(); };
extern T_func_00898880 G1_func_00898880;
void func_00898880()
{
    G1_func_00898880.m();
}
