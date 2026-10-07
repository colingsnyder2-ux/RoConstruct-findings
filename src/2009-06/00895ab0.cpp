// roc 2009-06 00895ab0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895ab0
//
// 00895ab0  b9d8eaa300           mov ecx, 0xa3ead8
// 00895ab5  e926bcc3ff           jmp 0x4d16e0
// auto-matched from its assembly shape

struct T_func_00895ab0 { void m(); };
extern T_func_00895ab0 G1_func_00895ab0;
void func_00895ab0()
{
    G1_func_00895ab0.m();
}
