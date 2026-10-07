// roc 2011-06 00a303f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a303f0
//
// 00a303f0  b93020cb00           mov ecx, 0xcb2030
// 00a303f5  e946d79dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a303f0 { void m(); };
extern T_func_00a303f0 G1_func_00a303f0;
void func_00a303f0()
{
    G1_func_00a303f0.m();
}
