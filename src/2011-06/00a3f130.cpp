// roc 2011-06 00a3f130  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f130
//
// 00a3f130  b9f848cd00           mov ecx, 0xcd48f8
// 00a3f135  e986dfa6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3f130 { void m(); };
extern T_func_00a3f130 G1_func_00a3f130;
void func_00a3f130()
{
    G1_func_00a3f130.m();
}
