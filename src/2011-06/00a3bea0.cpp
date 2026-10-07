// roc 2011-06 00a3bea0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bea0
//
// 00a3bea0  b988f9cc00           mov ecx, 0xccf988
// 00a3bea5  e91612a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3bea0 { void m(); };
extern T_func_00a3bea0 G1_func_00a3bea0;
void func_00a3bea0()
{
    G1_func_00a3bea0.m();
}
