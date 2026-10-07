// roc 2011-06 00a303b0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a303b0
//
// 00a303b0  b9f81acb00           mov ecx, 0xcb1af8
// 00a303b5  e986d79dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a303b0 { void m(); };
extern T_func_00a303b0 G1_func_00a303b0;
void func_00a303b0()
{
    G1_func_00a303b0.m();
}
