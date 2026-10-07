// roc 2011-06 00a342f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a342f0
//
// 00a342f0  b9c0a0cb00           mov ecx, 0xcba0c0
// 00a342f5  e9d6a6b0ff           jmp 0x53e9d0
// auto-matched from its assembly shape

struct T_func_00a342f0 { void m(); };
extern T_func_00a342f0 G1_func_00a342f0;
void func_00a342f0()
{
    G1_func_00a342f0.m();
}
