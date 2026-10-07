// roc 2011-06 00a354e0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a354e0
//
// 00a354e0  b938d5cb00           mov ecx, 0xcbd538
// 00a354e5  e90689beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a354e0 { void m(); };
extern T_func_00a354e0 G1_func_00a354e0;
void func_00a354e0()
{
    G1_func_00a354e0.m();
}
