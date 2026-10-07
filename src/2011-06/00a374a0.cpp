// roc 2011-06 00a374a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a374a0
//
// 00a374a0  b9a857cc00           mov ecx, 0xcc57a8
// 00a374a5  e996669dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a374a0 { void m(); };
extern T_func_00a374a0 G1_func_00a374a0;
void func_00a374a0()
{
    G1_func_00a374a0.m();
}
