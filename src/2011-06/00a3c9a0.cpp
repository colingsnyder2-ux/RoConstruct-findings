// roc 2011-06 00a3c9a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c9a0
//
// 00a3c9a0  b9900ccd00           mov ecx, 0xcd0c90
// 00a3c9a5  e966fba6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c9a0 { void m(); };
extern T_func_00a3c9a0 G1_func_00a3c9a0;
void func_00a3c9a0()
{
    G1_func_00a3c9a0.m();
}
