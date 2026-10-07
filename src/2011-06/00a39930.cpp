// roc 2011-06 00a39930  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39930
//
// 00a39930  b910b3cc00           mov ecx, 0xccb310
// 00a39935  e98637a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a39930 { void m(); };
extern T_func_00a39930 G1_func_00a39930;
void func_00a39930()
{
    G1_func_00a39930.m();
}
