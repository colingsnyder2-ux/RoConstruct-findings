// roc 2011-06 00a303a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a303a0
//
// 00a303a0  b9d01bcb00           mov ecx, 0xcb1bd0
// 00a303a5  e996d79dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a303a0 { void m(); };
extern T_func_00a303a0 G1_func_00a303a0;
void func_00a303a0()
{
    G1_func_00a303a0.m();
}
