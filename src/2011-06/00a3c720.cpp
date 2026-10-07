// roc 2011-06 00a3c720  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c720
//
// 00a3c720  b99003cd00           mov ecx, 0xcd0390
// 00a3c725  e9e6fda6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c720 { void m(); };
extern T_func_00a3c720 G1_func_00a3c720;
void func_00a3c720()
{
    G1_func_00a3c720.m();
}
