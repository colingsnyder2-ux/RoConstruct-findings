// roc 2011-06 00a19000  unit: seg_00a10000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19000
//
// 00a19000  b94b79cb00           mov ecx, 0xcb794b
// 00a19005  e91631a1ff           jmp 0x42c120
// auto-matched from its assembly shape

struct T_func_00a19000 { void m(); };
extern T_func_00a19000 G1_func_00a19000;
void func_00a19000()
{
    G1_func_00a19000.m();
}
