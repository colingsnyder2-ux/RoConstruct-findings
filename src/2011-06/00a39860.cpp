// roc 2011-06 00a39860  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39860
//
// 00a39860  b9f0b4cc00           mov ecx, 0xccb4f0
// 00a39865  e9a62ca7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39860 { void m(); };
extern T_func_00a39860 G1_func_00a39860;
void func_00a39860()
{
    G1_func_00a39860.m();
}
