// roc 2011-06 00a37850  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37850
//
// 00a37850  b9e025cc00           mov ecx, 0xcc25e0
// 00a37855  e9e6629dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37850 { void m(); };
extern T_func_00a37850 G1_func_00a37850;
void func_00a37850()
{
    G1_func_00a37850.m();
}
