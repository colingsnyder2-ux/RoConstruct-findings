// roc 2011-06 00a35470  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35470
//
// 00a35470  b910d7cb00           mov ecx, 0xcbd710
// 00a35475  e99670a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a35470 { void m(); };
extern T_func_00a35470 G1_func_00a35470;
void func_00a35470()
{
    G1_func_00a35470.m();
}
