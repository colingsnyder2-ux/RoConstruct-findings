// roc 2011-06 00a3f9f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f9f0
//
// 00a3f9f0  b9c06ad100           mov ecx, 0xd16ac0
// 00a3f9f5  e9e6cedbff           jmp 0x7fc8e0
// auto-matched from its assembly shape

struct T_func_00a3f9f0 { void m(); };
extern T_func_00a3f9f0 G1_func_00a3f9f0;
void func_00a3f9f0()
{
    G1_func_00a3f9f0.m();
}
