// roc 2011-06 00a397a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a397a0
//
// 00a397a0  b9a8b3cc00           mov ecx, 0xccb3a8
// 00a397a5  e91639a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a397a0 { void m(); };
extern T_func_00a397a0 G1_func_00a397a0;
void func_00a397a0()
{
    G1_func_00a397a0.m();
}
