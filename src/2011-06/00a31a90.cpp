// roc 2011-06 00a31a90  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31a90
//
// 00a31a90  b9ec3dcb00           mov ecx, 0xcb3dec
// 00a31a95  e9e6c7a3ff           jmp 0x46e280
// auto-matched from its assembly shape

struct T_func_00a31a90 { void m(); };
extern T_func_00a31a90 G1_func_00a31a90;
void func_00a31a90()
{
    G1_func_00a31a90.m();
}
