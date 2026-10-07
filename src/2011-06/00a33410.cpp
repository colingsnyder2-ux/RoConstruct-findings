// roc 2011-06 00a33410  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33410
//
// 00a33410  b9a076cb00           mov ecx, 0xcb76a0
// 00a33415  e9869eaaff           jmp 0x4dd2a0
// auto-matched from its assembly shape

struct T_func_00a33410 { void m(); };
extern T_func_00a33410 G1_func_00a33410;
void func_00a33410()
{
    G1_func_00a33410.m();
}
