// roc 2011-06 00a3c740  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c740
//
// 00a3c740  b99807cd00           mov ecx, 0xcd0798
// 00a3c745  e9c6fda6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c740 { void m(); };
extern T_func_00a3c740 G1_func_00a3c740;
void func_00a3c740()
{
    G1_func_00a3c740.m();
}
