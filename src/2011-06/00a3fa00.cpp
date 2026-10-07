// roc 2011-06 00a3fa00  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fa00
//
// 00a3fa00  b9946cd100           mov ecx, 0xd16c94
// 00a3fa05  e9268fbaff           jmp 0x5e8930
// auto-matched from its assembly shape

struct T_func_00a3fa00 { void m(); };
extern T_func_00a3fa00 G1_func_00a3fa00;
void func_00a3fa00()
{
    G1_func_00a3fa00.m();
}
