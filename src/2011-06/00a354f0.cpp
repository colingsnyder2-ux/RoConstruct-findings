// roc 2011-06 00a354f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a354f0
//
// 00a354f0  b978d6cb00           mov ecx, 0xcbd678
// 00a354f5  e91670a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a354f0 { void m(); };
extern T_func_00a354f0 G1_func_00a354f0;
void func_00a354f0()
{
    G1_func_00a354f0.m();
}
