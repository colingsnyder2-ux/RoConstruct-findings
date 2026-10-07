// roc 2011-06 00a3eed0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3eed0
//
// 00a3eed0  b9b044cd00           mov ecx, 0xcd44b0
// 00a3eed5  e9e6e1a6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3eed0 { void m(); };
extern T_func_00a3eed0 G1_func_00a3eed0;
void func_00a3eed0()
{
    G1_func_00a3eed0.m();
}
