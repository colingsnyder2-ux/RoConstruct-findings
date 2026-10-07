// roc 2011-06 00a3f180  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f180
//
// 00a3f180  b96449cd00           mov ecx, 0xcd4964
// 00a3f185  e986d3a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f180 { void m(); };
extern T_func_00a3f180 G1_func_00a3f180;
void func_00a3f180()
{
    G1_func_00a3f180.m();
}
