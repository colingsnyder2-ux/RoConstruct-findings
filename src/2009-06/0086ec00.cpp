// roc 2009-06 0086ec00  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086ec00
//
// 0086ec00  b9b0f1a400           mov ecx, 0xa4f1b0
// 0086ec05  e9464bc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086ec00 { void m(); };
extern T_func_0086ec00 G1_func_0086ec00;
void func_0086ec00()
{
    G1_func_0086ec00.m();
}
