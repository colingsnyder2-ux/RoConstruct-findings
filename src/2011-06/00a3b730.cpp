// roc 2011-06 00a3b730  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b730
//
// 00a3b730  b958f0cc00           mov ecx, 0xccf058
// 00a3b735  e9d60da7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b730 { void m(); };
extern T_func_00a3b730 G1_func_00a3b730;
void func_00a3b730()
{
    G1_func_00a3b730.m();
}
