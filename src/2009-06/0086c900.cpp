// roc 2009-06 0086c900  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086c900
//
// 0086c900  b9d0daa400           mov ecx, 0xa4dad0
// 0086c905  e9466ec4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086c900 { void m(); };
extern T_func_0086c900 G1_func_0086c900;
void func_0086c900()
{
    G1_func_0086c900.m();
}
