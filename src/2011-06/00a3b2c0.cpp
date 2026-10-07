// roc 2011-06 00a3b2c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b2c0
//
// 00a3b2c0  b9f8e3cc00           mov ecx, 0xcce3f8
// 00a3b2c5  e9262bbeff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a3b2c0 { void m(); };
extern T_func_00a3b2c0 G1_func_00a3b2c0;
void func_00a3b2c0()
{
    G1_func_00a3b2c0.m();
}
