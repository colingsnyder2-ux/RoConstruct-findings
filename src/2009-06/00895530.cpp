// roc 2009-06 00895530  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895530
//
// 00895530  b948daa300           mov ecx, 0xa3da48
// 00895535  e9d6a2d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00895530 { void m(); };
extern T_func_00895530 G1_func_00895530;
void func_00895530()
{
    G1_func_00895530.m();
}
