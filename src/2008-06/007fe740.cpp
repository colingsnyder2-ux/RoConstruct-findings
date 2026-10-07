// roc 2008-06 007fe740  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe740
//
// 007fe740  b908939700           mov ecx, 0x979308
// 007fe745  e976c4c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe740 { void m(); };
extern T_func_007fe740 G1_func_007fe740;
void func_007fe740()
{
    G1_func_007fe740.m();
}
