// roc 2011-06 00a3beb0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3beb0
//
// 00a3beb0  b948f9cc00           mov ecx, 0xccf948
// 00a3beb5  e90612a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3beb0 { void m(); };
extern T_func_00a3beb0 G1_func_00a3beb0;
void func_00a3beb0()
{
    G1_func_00a3beb0.m();
}
