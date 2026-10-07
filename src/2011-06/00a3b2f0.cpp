// roc 2011-06 00a3b2f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b2f0
//
// 00a3b2f0  b9f0e4cc00           mov ecx, 0xcce4f0
// 00a3b2f5  e9c61da7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3b2f0 { void m(); };
extern T_func_00a3b2f0 G1_func_00a3b2f0;
void func_00a3b2f0()
{
    G1_func_00a3b2f0.m();
}
