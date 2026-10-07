// roc 2011-06 00a37eb0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37eb0
//
// 00a37eb0  b9e88fcc00           mov ecx, 0xcc8fe8
// 00a37eb5  e906d6b8ff           jmp 0x5c54c0
// auto-matched from its assembly shape

struct T_func_00a37eb0 { void m(); };
extern T_func_00a37eb0 G1_func_00a37eb0;
void func_00a37eb0()
{
    G1_func_00a37eb0.m();
}
