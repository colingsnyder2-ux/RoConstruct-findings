// roc 2011-06 00a31760  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31760
//
// 00a31760  b9a839cb00           mov ecx, 0xcb39a8
// 00a31765  e9c671bbff           jmp 0x5e8930
// auto-matched from its assembly shape

struct T_func_00a31760 { void m(); };
extern T_func_00a31760 G1_func_00a31760;
void func_00a31760()
{
    G1_func_00a31760.m();
}
