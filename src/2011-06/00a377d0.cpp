// roc 2011-06 00a377d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a377d0
//
// 00a377d0  b9a02ccc00           mov ecx, 0xcc2ca0
// 00a377d5  e966639dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a377d0 { void m(); };
extern T_func_00a377d0 G1_func_00a377d0;
void func_00a377d0()
{
    G1_func_00a377d0.m();
}
