// roc 2011-06 00a19010  unit: seg_00a10000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19010
//
// 00a19010  b94a79cb00           mov ecx, 0xcb794a
// 00a19015  e90631a1ff           jmp 0x42c120
// auto-matched from its assembly shape

struct T_func_00a19010 { void m(); };
extern T_func_00a19010 G1_func_00a19010;
void func_00a19010()
{
    G1_func_00a19010.m();
}
