// roc 2011-06 00a303e0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a303e0
//
// 00a303e0  b91021cb00           mov ecx, 0xcb2110
// 00a303e5  e956d79dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a303e0 { void m(); };
extern T_func_00a303e0 G1_func_00a303e0;
void func_00a303e0()
{
    G1_func_00a303e0.m();
}
