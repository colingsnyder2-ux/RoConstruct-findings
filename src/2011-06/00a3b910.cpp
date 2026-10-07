// roc 2011-06 00a3b910  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b910
//
// 00a3b910  b9b0f0cc00           mov ecx, 0xccf0b0
// 00a3b915  e9f60ba7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b910 { void m(); };
extern T_func_00a3b910 G1_func_00a3b910;
void func_00a3b910()
{
    G1_func_00a3b910.m();
}
