// roc 2011-06 00a3c930  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c930
//
// 00a3c930  b9200acd00           mov ecx, 0xcd0a20
// 00a3c935  e98607a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3c930 { void m(); };
extern T_func_00a3c930 G1_func_00a3c930;
void func_00a3c930()
{
    G1_func_00a3c930.m();
}
