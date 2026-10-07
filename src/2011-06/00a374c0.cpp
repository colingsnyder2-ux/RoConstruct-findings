// roc 2011-06 00a374c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a374c0
//
// 00a374c0  b9f855cc00           mov ecx, 0xcc55f8
// 00a374c5  e976669dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a374c0 { void m(); };
extern T_func_00a374c0 G1_func_00a374c0;
void func_00a374c0()
{
    G1_func_00a374c0.m();
}
