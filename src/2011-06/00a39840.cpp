// roc 2011-06 00a39840  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39840
//
// 00a39840  b940b4cc00           mov ecx, 0xccb440
// 00a39845  e96667a9ff           jmp 0x4cffb0
// auto-matched from its assembly shape

struct T_func_00a39840 { void m(); };
extern T_func_00a39840 G1_func_00a39840;
void func_00a39840()
{
    G1_func_00a39840.m();
}
