// roc 2011-06 00a378d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a378d0
//
// 00a378d0  b9201fcc00           mov ecx, 0xcc1f20
// 00a378d5  e966629dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a378d0 { void m(); };
extern T_func_00a378d0 G1_func_00a378d0;
void func_00a378d0()
{
    G1_func_00a378d0.m();
}
