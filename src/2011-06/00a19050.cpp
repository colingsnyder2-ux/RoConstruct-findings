// roc 2011-06 00a19050  unit: seg_00a10000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19050
//
// 00a19050  b94879cb00           mov ecx, 0xcb7948
// 00a19055  e9c630a1ff           jmp 0x42c120
// auto-matched from its assembly shape

struct T_func_00a19050 { void m(); };
extern T_func_00a19050 G1_func_00a19050;
void func_00a19050()
{
    G1_func_00a19050.m();
}
