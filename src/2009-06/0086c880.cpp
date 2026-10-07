// roc 2009-06 0086c880  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086c880
//
// 0086c880  b9e0d8a400           mov ecx, 0xa4d8e0
// 0086c885  e9c66ec4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086c880 { void m(); };
extern T_func_0086c880 G1_func_0086c880;
void func_0086c880()
{
    G1_func_0086c880.m();
}
