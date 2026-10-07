// roc 2011-06 00a34ff0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34ff0
//
// 00a34ff0  b9e0bdcb00           mov ecx, 0xcbbde0
// 00a34ff5  e91675a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a34ff0 { void m(); };
extern T_func_00a34ff0 G1_func_00a34ff0;
void func_00a34ff0()
{
    G1_func_00a34ff0.m();
}
