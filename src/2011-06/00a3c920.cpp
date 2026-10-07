// roc 2011-06 00a3c920  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c920
//
// 00a3c920  b9f80ccd00           mov ecx, 0xcd0cf8
// 00a3c925  e99607a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3c920 { void m(); };
extern T_func_00a3c920 G1_func_00a3c920;
void func_00a3c920()
{
    G1_func_00a3c920.m();
}
