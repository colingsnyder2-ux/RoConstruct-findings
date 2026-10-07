// roc 2011-06 00a378f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a378f0
//
// 00a378f0  b9701dcc00           mov ecx, 0xcc1d70
// 00a378f5  e946629dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a378f0 { void m(); };
extern T_func_00a378f0 G1_func_00a378f0;
void func_00a378f0()
{
    G1_func_00a378f0.m();
}
