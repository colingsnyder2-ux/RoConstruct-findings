// roc 2011-06 00a303d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a303d0
//
// 00a303d0  b95818cb00           mov ecx, 0xcb1858
// 00a303d5  e966d79dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a303d0 { void m(); };
extern T_func_00a303d0 G1_func_00a303d0;
void func_00a303d0()
{
    G1_func_00a303d0.m();
}
