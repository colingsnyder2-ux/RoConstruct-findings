// roc 2011-06 00a39720  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39720
//
// 00a39720  b9e0b2cc00           mov ecx, 0xccb2e0
// 00a39725  e9e62da7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39720 { void m(); };
extern T_func_00a39720 G1_func_00a39720;
void func_00a39720()
{
    G1_func_00a39720.m();
}
