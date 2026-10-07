// roc 2011-06 00a3ab90  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ab90
//
// 00a3ab90  b968d5cc00           mov ecx, 0xccd568
// 00a3ab95  e97619a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3ab90 { void m(); };
extern T_func_00a3ab90 G1_func_00a3ab90;
void func_00a3ab90()
{
    G1_func_00a3ab90.m();
}
