// roc 2011-06 00a3c8d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c8d0
//
// 00a3c8d0  b9980acd00           mov ecx, 0xcd0a98
// 00a3c8d5  e9e607a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3c8d0 { void m(); };
extern T_func_00a3c8d0 G1_func_00a3c8d0;
void func_00a3c8d0()
{
    G1_func_00a3c8d0.m();
}
