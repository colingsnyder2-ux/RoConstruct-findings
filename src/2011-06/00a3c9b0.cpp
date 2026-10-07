// roc 2011-06 00a3c9b0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c9b0
//
// 00a3c9b0  b9c80dcd00           mov ecx, 0xcd0dc8
// 00a3c9b5  e90607a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3c9b0 { void m(); };
extern T_func_00a3c9b0 G1_func_00a3c9b0;
void func_00a3c9b0()
{
    G1_func_00a3c9b0.m();
}
