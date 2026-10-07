// roc 2011-06 00a354d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a354d0
//
// 00a354d0  b9e8d7cb00           mov ecx, 0xcbd7e8
// 00a354d5  e93670a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a354d0 { void m(); };
extern T_func_00a354d0 G1_func_00a354d0;
void func_00a354d0()
{
    G1_func_00a354d0.m();
}
