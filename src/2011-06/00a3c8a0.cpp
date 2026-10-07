// roc 2011-06 00a3c8a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c8a0
//
// 00a3c8a0  b9080bcd00           mov ecx, 0xcd0b08
// 00a3c8a5  e91608a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3c8a0 { void m(); };
extern T_func_00a3c8a0 G1_func_00a3c8a0;
void func_00a3c8a0()
{
    G1_func_00a3c8a0.m();
}
