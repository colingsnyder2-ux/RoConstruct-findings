// roc 2009-06 00898890  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898890
//
// 00898890  b9705aa400           mov ecx, 0xa45a70
// 00898895  e9761ab7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898890 { void m(); };
extern T_func_00898890 G1_func_00898890;
void func_00898890()
{
    G1_func_00898890.m();
}
