// roc 2009-06 00898800  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898800
//
// 00898800  b97861a400           mov ecx, 0xa46178
// 00898805  e9061bb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898800 { void m(); };
extern T_func_00898800 G1_func_00898800;
void func_00898800()
{
    G1_func_00898800.m();
}
