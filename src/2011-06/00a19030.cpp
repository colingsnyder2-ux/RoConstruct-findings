// roc 2011-06 00a19030  unit: seg_00a10000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19030
//
// 00a19030  b94c79cb00           mov ecx, 0xcb794c
// 00a19035  e9e630a1ff           jmp 0x42c120
// auto-matched from its assembly shape

struct T_func_00a19030 { void m(); };
extern T_func_00a19030 G1_func_00a19030;
void func_00a19030()
{
    G1_func_00a19030.m();
}
