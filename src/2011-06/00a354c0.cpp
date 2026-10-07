// roc 2011-06 00a354c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a354c0
//
// 00a354c0  b938d6cb00           mov ecx, 0xcbd638
// 00a354c5  e9f67ba7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a354c0 { void m(); };
extern T_func_00a354c0 G1_func_00a354c0;
void func_00a354c0()
{
    G1_func_00a354c0.m();
}
