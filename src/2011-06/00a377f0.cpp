// roc 2011-06 00a377f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a377f0
//
// 00a377f0  b9f02acc00           mov ecx, 0xcc2af0
// 00a377f5  e946639dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a377f0 { void m(); };
extern T_func_00a377f0 G1_func_00a377f0;
void func_00a377f0()
{
    G1_func_00a377f0.m();
}
