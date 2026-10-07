// roc 2011-06 00a39730  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39730
//
// 00a39730  b950b0cc00           mov ecx, 0xccb050
// 00a39735  e9d62da7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39730 { void m(); };
extern T_func_00a39730 G1_func_00a39730;
void func_00a39730()
{
    G1_func_00a39730.m();
}
