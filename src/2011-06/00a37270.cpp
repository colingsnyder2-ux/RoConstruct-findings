// roc 2011-06 00a37270  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37270
//
// 00a37270  b93075cc00           mov ecx, 0xcc7530
// 00a37275  e9c6689dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37270 { void m(); };
extern T_func_00a37270 G1_func_00a37270;
void func_00a37270()
{
    G1_func_00a37270.m();
}
