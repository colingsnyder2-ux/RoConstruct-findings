// roc 2011-06 00a3b720  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b720
//
// 00a3b720  b910edcc00           mov ecx, 0xcced10
// 00a3b725  e9e60da7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b720 { void m(); };
extern T_func_00a3b720 G1_func_00a3b720;
void func_00a3b720()
{
    G1_func_00a3b720.m();
}
