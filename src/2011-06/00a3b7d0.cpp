// roc 2011-06 00a3b7d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b7d0
//
// 00a3b7d0  b930eacc00           mov ecx, 0xccea30
// 00a3b7d5  e9764ec4ff           jmp 0x680650
// auto-matched from its assembly shape

struct T_func_00a3b7d0 { void m(); };
extern T_func_00a3b7d0 G1_func_00a3b7d0;
void func_00a3b7d0()
{
    G1_func_00a3b7d0.m();
}
