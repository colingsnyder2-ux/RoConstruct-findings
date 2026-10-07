// roc 2011-06 00a33030  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33030
//
// 00a33030  b95068cb00           mov ecx, 0xcb6850
// 00a33035  e9d694a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a33030 { void m(); };
extern T_func_00a33030 G1_func_00a33030;
void func_00a33030()
{
    G1_func_00a33030.m();
}
