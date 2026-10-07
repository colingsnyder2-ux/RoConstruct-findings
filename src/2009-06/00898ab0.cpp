// roc 2009-06 00898ab0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898ab0
//
// 00898ab0  b9d897a400           mov ecx, 0xa497d8
// 00898ab5  e9f64bd5ff           jmp 0x5ed6b0
// auto-matched from its assembly shape

struct T_func_00898ab0 { void m(); };
extern T_func_00898ab0 G1_func_00898ab0;
void func_00898ab0()
{
    G1_func_00898ab0.m();
}
