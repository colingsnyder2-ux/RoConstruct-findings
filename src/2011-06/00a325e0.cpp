// roc 2011-06 00a325e0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a325e0
//
// 00a325e0  b9c860cb00           mov ecx, 0xcb60c8
// 00a325e5  e906b8beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a325e0 { void m(); };
extern T_func_00a325e0 G1_func_00a325e0;
void func_00a325e0()
{
    G1_func_00a325e0.m();
}
