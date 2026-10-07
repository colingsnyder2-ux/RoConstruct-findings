// roc 2011-06 00a39700  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39700
//
// 00a39700  b9e0b3cc00           mov ecx, 0xccb3e0
// 00a39705  e9b639a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a39700 { void m(); };
extern T_func_00a39700 G1_func_00a39700;
void func_00a39700()
{
    G1_func_00a39700.m();
}
