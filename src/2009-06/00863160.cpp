// roc 2009-06 00863160  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00863160
//
// 00863160  b97042a400           mov ecx, 0xa44270
// 00863165  e9e605c5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00863160 { void m(); };
extern T_func_00863160 G1_func_00863160;
void func_00863160()
{
    G1_func_00863160.m();
}
