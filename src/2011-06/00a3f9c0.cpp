// roc 2011-06 00a3f9c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f9c0
//
// 00a3f9c0  b9f861d100           mov ecx, 0xd161f8
// 00a3f9c5  e9668fbaff           jmp 0x5e8930
// auto-matched from its assembly shape

struct T_func_00a3f9c0 { void m(); };
extern T_func_00a3f9c0 G1_func_00a3f9c0;
void func_00a3f9c0()
{
    G1_func_00a3f9c0.m();
}
