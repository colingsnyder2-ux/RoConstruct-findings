// roc 2009-06 0086c920  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086c920
//
// 0086c920  b9b0d7a400           mov ecx, 0xa4d7b0
// 0086c925  e9266ec4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086c920 { void m(); };
extern T_func_0086c920 G1_func_0086c920;
void func_0086c920()
{
    G1_func_0086c920.m();
}
