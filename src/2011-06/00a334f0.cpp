// roc 2011-06 00a334f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a334f0
//
// 00a334f0  b9a879cb00           mov ecx, 0xcb79a8
// 00a334f5  e926cbaaff           jmp 0x4e0020
// auto-matched from its assembly shape

struct T_func_00a334f0 { void m(); };
extern T_func_00a334f0 G1_func_00a334f0;
void func_00a334f0()
{
    G1_func_00a334f0.m();
}
