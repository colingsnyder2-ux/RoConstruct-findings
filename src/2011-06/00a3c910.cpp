// roc 2011-06 00a3c910  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c910
//
// 00a3c910  b9e80bcd00           mov ecx, 0xcd0be8
// 00a3c915  e9f6fba6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c910 { void m(); };
extern T_func_00a3c910 G1_func_00a3c910;
void func_00a3c910()
{
    G1_func_00a3c910.m();
}
