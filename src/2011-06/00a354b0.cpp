// roc 2011-06 00a354b0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a354b0
//
// 00a354b0  b9b0d7cb00           mov ecx, 0xcbd7b0
// 00a354b5  e9067ca7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a354b0 { void m(); };
extern T_func_00a354b0 G1_func_00a354b0;
void func_00a354b0()
{
    G1_func_00a354b0.m();
}
