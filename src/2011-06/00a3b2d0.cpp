// roc 2011-06 00a3b2d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b2d0
//
// 00a3b2d0  b9c0e3cc00           mov ecx, 0xcce3c0
// 00a3b2d5  e9e61da7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3b2d0 { void m(); };
extern T_func_00a3b2d0 G1_func_00a3b2d0;
void func_00a3b2d0()
{
    G1_func_00a3b2d0.m();
}
