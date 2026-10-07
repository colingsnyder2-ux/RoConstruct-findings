// roc 2011-06 00a3f9e0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f9e0
//
// 00a3f9e0  b98462d100           mov ecx, 0xd16284
// 00a3f9e5  e9468fbaff           jmp 0x5e8930
// auto-matched from its assembly shape

struct T_func_00a3f9e0 { void m(); };
extern T_func_00a3f9e0 G1_func_00a3f9e0;
void func_00a3f9e0()
{
    G1_func_00a3f9e0.m();
}
