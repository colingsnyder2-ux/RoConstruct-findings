// roc 2009-06 00863120  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00863120
//
// 00863120  b9a842a400           mov ecx, 0xa442a8
// 00863125  e92606c5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00863120 { void m(); };
extern T_func_00863120 G1_func_00863120;
void func_00863120()
{
    G1_func_00863120.m();
}
