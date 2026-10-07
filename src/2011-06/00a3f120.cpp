// roc 2011-06 00a3f120  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f120
//
// 00a3f120  b98848cd00           mov ecx, 0xcd4888
// 00a3f125  e996dfa6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3f120 { void m(); };
extern T_func_00a3f120 G1_func_00a3f120;
void func_00a3f120()
{
    G1_func_00a3f120.m();
}
