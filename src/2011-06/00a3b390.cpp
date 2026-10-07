// roc 2011-06 00a3b390  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b390
//
// 00a3b390  b928e6cc00           mov ecx, 0xcce628
// 00a3b395  e97611a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b390 { void m(); };
extern T_func_00a3b390 G1_func_00a3b390;
void func_00a3b390()
{
    G1_func_00a3b390.m();
}
