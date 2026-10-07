// roc 2011-06 00a377b0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a377b0
//
// 00a377b0  b9502ecc00           mov ecx, 0xcc2e50
// 00a377b5  e986639dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a377b0 { void m(); };
extern T_func_00a377b0 G1_func_00a377b0;
void func_00a377b0()
{
    G1_func_00a377b0.m();
}
