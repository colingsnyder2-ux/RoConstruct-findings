// roc 2009-06 0086c260  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086c260
//
// 0086c260  b948cea400           mov ecx, 0xa4ce48
// 0086c265  e9e674c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086c260 { void m(); };
extern T_func_0086c260 G1_func_0086c260;
void func_0086c260()
{
    G1_func_0086c260.m();
}
