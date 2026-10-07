// roc 2009-06 00863140  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00863140
//
// 00863140  b96843a400           mov ecx, 0xa44368
// 00863145  e90606c5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00863140 { void m(); };
extern T_func_00863140 G1_func_00863140;
void func_00863140()
{
    G1_func_00863140.m();
}
