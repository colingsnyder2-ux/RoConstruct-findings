// roc 2008-06 007fd820  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd820
//
// 007fd820  b9e0539700           mov ecx, 0x9753e0
// 007fd825  e9e65bdaff           jmp 0x5a3410
// auto-matched from its assembly shape

struct T_func_007fd820 { void m(); };
extern T_func_007fd820 G1_func_007fd820;
void func_007fd820()
{
    G1_func_007fd820.m();
}
