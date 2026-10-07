// roc 2011-06 00a372f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a372f0
//
// 00a372f0  b9706ecc00           mov ecx, 0xcc6e70
// 00a372f5  e946689dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a372f0 { void m(); };
extern T_func_00a372f0 G1_func_00a372f0;
void func_00a372f0()
{
    G1_func_00a372f0.m();
}
