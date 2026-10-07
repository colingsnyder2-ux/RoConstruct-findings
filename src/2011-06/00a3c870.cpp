// roc 2011-06 00a3c870  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c870
//
// 00a3c870  b96808cd00           mov ecx, 0xcd0868
// 00a3c875  e94608a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3c870 { void m(); };
extern T_func_00a3c870 G1_func_00a3c870;
void func_00a3c870()
{
    G1_func_00a3c870.m();
}
