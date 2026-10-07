// roc 2011-06 00a3b7e0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b7e0
//
// 00a3b7e0  b9b0eacc00           mov ecx, 0xcceab0
// 00a3b7e5  e9863fc3ff           jmp 0x66f770
// auto-matched from its assembly shape

struct T_func_00a3b7e0 { void m(); };
extern T_func_00a3b7e0 G1_func_00a3b7e0;
void func_00a3b7e0()
{
    G1_func_00a3b7e0.m();
}
