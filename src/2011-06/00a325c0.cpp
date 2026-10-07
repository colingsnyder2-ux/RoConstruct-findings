// roc 2011-06 00a325c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a325c0
//
// 00a325c0  b9405dcb00           mov ecx, 0xcb5d40
// 00a325c5  e926b8beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a325c0 { void m(); };
extern T_func_00a325c0 G1_func_00a325c0;
void func_00a325c0()
{
    G1_func_00a325c0.m();
}
