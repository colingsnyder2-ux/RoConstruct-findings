// roc 2011-06 00a37fa0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37fa0
//
// 00a37fa0  b91086cc00           mov ecx, 0xcc8610
// 00a37fa5  e9d6b1b8ff           jmp 0x5c3180
// auto-matched from its assembly shape

struct T_func_00a37fa0 { void m(); };
extern T_func_00a37fa0 G1_func_00a37fa0;
void func_00a37fa0()
{
    G1_func_00a37fa0.m();
}
