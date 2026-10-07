// roc 2011-06 00a377a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a377a0
//
// 00a377a0  b9282fcc00           mov ecx, 0xcc2f28
// 00a377a5  e996639dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a377a0 { void m(); };
extern T_func_00a377a0 G1_func_00a377a0;
void func_00a377a0()
{
    G1_func_00a377a0.m();
}
