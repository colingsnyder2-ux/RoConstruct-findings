// roc 2009-06 0086d040  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086d040
//
// 0086d040  b920dfa400           mov ecx, 0xa4df20
// 0086d045  e90667c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086d040 { void m(); };
extern T_func_0086d040 G1_func_0086d040;
void func_0086d040()
{
    G1_func_0086d040.m();
}
