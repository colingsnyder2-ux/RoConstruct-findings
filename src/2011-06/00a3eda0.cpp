// roc 2011-06 00a3eda0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3eda0
//
// 00a3eda0  b9e041cd00           mov ecx, 0xcd41e0
// 00a3eda5  e916e3a6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3eda0 { void m(); };
extern T_func_00a3eda0 G1_func_00a3eda0;
void func_00a3eda0()
{
    G1_func_00a3eda0.m();
}
