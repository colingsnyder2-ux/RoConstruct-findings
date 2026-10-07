// roc 2009-06 0086d430  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086d430
//
// 0086d430  b9b8e3a400           mov ecx, 0xa4e3b8
// 0086d435  e91663c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086d430 { void m(); };
extern T_func_0086d430 G1_func_0086d430;
void func_0086d430()
{
    G1_func_0086d430.m();
}
