// roc 2011-06 00a34d90  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34d90
//
// 00a34d90  b988b9cb00           mov ecx, 0xcbb988
// 00a34d95  e95690beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a34d90 { void m(); };
extern T_func_00a34d90 G1_func_00a34d90;
void func_00a34d90()
{
    G1_func_00a34d90.m();
}
