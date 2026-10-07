// roc 2011-06 00a35360  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35360
//
// 00a35360  b900d2cb00           mov ecx, 0xcbd200
// 00a35365  e9d6879dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a35360 { void m(); };
extern T_func_00a35360 G1_func_00a35360;
void func_00a35360()
{
    G1_func_00a35360.m();
}
