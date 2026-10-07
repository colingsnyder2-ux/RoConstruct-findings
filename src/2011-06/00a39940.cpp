// roc 2011-06 00a39940  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39940
//
// 00a39940  b9f0b0cc00           mov ecx, 0xccb0f0
// 00a39945  e97637a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a39940 { void m(); };
extern T_func_00a39940 G1_func_00a39940;
void func_00a39940()
{
    G1_func_00a39940.m();
}
