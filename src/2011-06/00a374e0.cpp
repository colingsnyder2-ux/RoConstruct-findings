// roc 2011-06 00a374e0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a374e0
//
// 00a374e0  b94854cc00           mov ecx, 0xcc5448
// 00a374e5  e956669dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a374e0 { void m(); };
extern T_func_00a374e0 G1_func_00a374e0;
void func_00a374e0()
{
    G1_func_00a374e0.m();
}
