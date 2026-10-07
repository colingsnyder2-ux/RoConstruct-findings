// roc 2009-06 00898840  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898840
//
// 00898840  b9585ea400           mov ecx, 0xa45e58
// 00898845  e9c61ab7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898840 { void m(); };
extern T_func_00898840 G1_func_00898840;
void func_00898840()
{
    G1_func_00898840.m();
}
