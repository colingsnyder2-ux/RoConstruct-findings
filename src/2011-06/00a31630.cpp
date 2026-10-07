// roc 2011-06 00a31630  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31630
//
// 00a31630  b9182dcb00           mov ecx, 0xcb2d18
// 00a31635  e91614a2ff           jmp 0x452a50
// auto-matched from its assembly shape

struct T_func_00a31630 { void m(); };
extern T_func_00a31630 G1_func_00a31630;
void func_00a31630()
{
    G1_func_00a31630.m();
}
