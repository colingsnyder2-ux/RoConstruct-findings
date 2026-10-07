// roc 2011-06 00a37fb0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37fb0
//
// 00a37fb0  b96885cc00           mov ecx, 0xcc8568
// 00a37fb5  e916afb8ff           jmp 0x5c2ed0
// auto-matched from its assembly shape

struct T_func_00a37fb0 { void m(); };
extern T_func_00a37fb0 G1_func_00a37fb0;
void func_00a37fb0()
{
    G1_func_00a37fb0.m();
}
