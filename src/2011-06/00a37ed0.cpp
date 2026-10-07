// roc 2011-06 00a37ed0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37ed0
//
// 00a37ed0  b9988ecc00           mov ecx, 0xcc8e98
// 00a37ed5  e96668b8ff           jmp 0x5be740
// auto-matched from its assembly shape

struct T_func_00a37ed0 { void m(); };
extern T_func_00a37ed0 G1_func_00a37ed0;
void func_00a37ed0()
{
    G1_func_00a37ed0.m();
}
