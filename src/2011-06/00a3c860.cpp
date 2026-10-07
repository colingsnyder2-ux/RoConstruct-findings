// roc 2011-06 00a3c860  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c860
//
// 00a3c860  b9580ccd00           mov ecx, 0xcd0c58
// 00a3c865  e95608a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3c860 { void m(); };
extern T_func_00a3c860 G1_func_00a3c860;
void func_00a3c860()
{
    G1_func_00a3c860.m();
}
