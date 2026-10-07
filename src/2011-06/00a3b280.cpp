// roc 2011-06 00a3b280  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b280
//
// 00a3b280  b910e1cc00           mov ecx, 0xcce110
// 00a3b285  e98612a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b280 { void m(); };
extern T_func_00a3b280 G1_func_00a3b280;
void func_00a3b280()
{
    G1_func_00a3b280.m();
}
