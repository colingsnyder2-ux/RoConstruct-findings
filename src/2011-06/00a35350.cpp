// roc 2011-06 00a35350  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35350
//
// 00a35350  b928d1cb00           mov ecx, 0xcbd128
// 00a35355  e9e6879dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a35350 { void m(); };
extern T_func_00a35350 G1_func_00a35350;
void func_00a35350()
{
    G1_func_00a35350.m();
}
